/* f_102d8be9 - build a quaternion from an axis and an angle.

   Asks the function table for the axis that belongs to a parameter, halves the angle the caller
   passed, and writes the four floats of a quaternion into the object its first argument names: the
   three axis components scaled by the sine of the half angle, and the cosine of that half on its own
   at +0x0c. It reads no global and writes nothing outside that object and its own frame.

   Evidence
   - the four fields are a quaternion ........ 0x102d8c2d/0x102d8c35/0x102d8c3e store through ecx (the
                                               object loaded from [ebp+8] at 0x102d8bfe) at +0x00,
                                               +0x04, +0x08, and 0x102d8c21 stores the cosine at +0x0c
                                               (the address of which the entry prepared at
                                               0x102d8c07-0x102d8c0a). Three components times a sine,
                                               plus a lone cosine, is exactly the axis-angle form and
                                               nothing else that was read says otherwise
   - the angle is halved by a constant ........ 0x102d8bfb loads the caller's third word and 0x102d8c01
                                               multiplies by the dword at COW_ADDR_FLOAT_HALF, which
                                               the image holds as 0x3f000000 = 0.5f
                                               (tools/cow/peek_bytes.py 0x10329a08)
   - the halving ROUNDS before the sincos ..... 0x102d8c10 `fstp dword ptr [ebp+8]` stores the product
                                               as a float and 0x102d8c1c `fld dword ptr [ebp+8]` reads
                                               it back before 0x102d8c1f `fsincos`. So sin/cos are taken
                                               of the float-rounded half, not of the double the fmul
                                               produced - the second rounding, at 0x102d8c21/0x102d8c23,
                                               is what makes the sine the multiplier and not the double
   - the sine replaces the caller's parameter .. the `fstp [eax]` at 0x102d8c23 writes through the
                                               address the entry built at 0x102d8c0d (`lea eax,[ebp+0xc]`),
                                               i.e. over the parameter word itself, and the three
                                               `fmul dword ptr [ebp+0xc]` at 0x102d8c28/0x102d8c32/0x102d8c3b
                                               then read THAT. A conversion that kept the original
                                               parameter value in a register would scale by t instead of
                                               by sin(t/2) - caught by mutation M2
   - the axis comes from the table, not from here 0x102d8bf6 calls COW_ADDR_VECTOR3_TABLE_THUNK, one
                                               instruction `jmp dword ptr [COW_ADDR_VECTOR3_TABLE_SLOT]`,
                                               slot 7 of the 0x39-dword function table at
                                               COW_ADDR_QUAT_FUNCTION_TABLE (tools/cow/peek_bytes.py).
                                               The entry then reads the three floats back from the
                                               buffer it handed it at 0x102d8c25/0x102d8c2f/0x102d8c38
                                               (ebp-0x14, -0x10, -0xc), so the routine's contract is
                                               read off this caller alone: fill three floats from one
                                               parameter. Its slot holds the trampoline 0x102d64a4
                                               (`push 1 / call 0x102e7670 / jmp [slot]`), whose refresh
                                               chain is unconverted - so the seed pins the slot to a
                                               returning row and the axis vector outright, rather than
                                               let both sides disappear into it and call that agreement
   - the frame traffic is the entry's own ...... push ebp (0x102d8be9), sub esp,0x14 (0x102d8bec), the
                                               two argument pushes (0x102d8bef/0x102d8bf5) into that
                                               local area, the two scratch words stored at ebp-4 and
                                               ebp-8 (0x102d8c0a/0x102d8c13) and read back as the store
                                               targets (0x102d8c16/0x102d8c19), and `leave` (0x102d8c41)
   - eax and edx are outputs, not scratch ...... nothing writes eax after the `mov eax,ecx` at
                                               0x102d8c2b, so the entry returns the object pointer in
                                               eax; edx holds the +0x0c address from 0x102d8c19. Both
                                               are compared by cowdiff, so both are set here rather
                                               than left to the bridge
   - stdcall, three arguments ................ 0x102d8c42 `ret 0xc`: the callee cleans, so rt_return's
                                               pop count is 0xc bytes (and the three argument words above the
                                               return address are gone, which is what makes the entry's
                                               own pushes below ebp harmless)
   - one caller, through the table ............ 0x103cc56c stores this entry's address (tools/cow/owner_index.py
                                               0x102d8be9): it is a slot of the same function family as
                                               the 0x102d920a split that is parked waiting for this
                                               table's refresh routine

   Proof: tools/cow/cowdiff.py 0x102d8be9 - PASS on eax, edx, callee-saved, esp, st0/top, memory writes
   (address, size, value, order - which is what pins the two scratch stores, the half-angle store into
   the parameter slot, and the four float stores) and calls out. cow/seeds/102d8be9.json pins the table
   slot, the axis vector and the angle, because unpinned the entry faults on a fuzzed object pointer
   before it stores anything and both sides would agree by agreeing on nothing.

   Name: cow_quaternion_from_axis_angle (guess) - from the four stores and the half-angle sincos. That
   the object is a quaternion the engine rotates with is supported by the shape; who asks for it is the
   table slot at 0x103cc56c, and what it drives is not established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the frame, the FPU and the stores. Not a
   guest layout: it never appears in guest memory - the quaternion it describes is written field by
   field by the adapter, from the original's own addresses. */
typedef struct CowQuaternionAxisAngle
{
    float x;
    float y;
    float z;
    float w;
    float s; /* the sine that is stored over the parameter at 0x102d8c23 and then read back as the
                multiplier at 0x102d8c28/0x102d8c32/0x102d8c3b; kept here so the three components above
                and the word in memory are the same value by construction, not by coincidence */
} CowQuaternionAxisAngle;

void cow_quaternion_from_axis_angle(float half, const float axis[3], CowQuaternionAxisAngle* out)
{
    const double h = (double)half;
    out->w = (float)cos(h);                      /* 0x102d8c21: the cosine, at +0x0c by itself */
    out->s = (float)sin(h);                      /* 0x102d8c23: stored over the parameter, and the
                                                    rounding to float is part of the behaviour - the
                                                    scales below use the rounded value, as the entry
                                                    does when it reads the word back */
    out->x = (float)((double)axis[0] * (double)out->s); /* 0x102d8c25-0x102d8c2d */
    out->y = (float)((double)axis[1] * (double)out->s); /* 0x102d8c2f-0x102d8c35 */
    out->z = (float)((double)axis[2] * (double)out->s); /* 0x102d8c38-0x102d8c3e */
}

/* COW_ADAPTER BEGIN - stdcall, three arguments, `ret 0xc`: rt_return's pop of 3 does the esp the
   entry's own `ret 0xc` does. The frame, the two argument pushes and the stores below are the entry's
   own effects in the original's order, because cowdiff compares the guest memory trace byte for byte.
   The readability gate skips this block. */
void cow_adapter_102d8be9(Guest* g)
{
    g->esp -= 4u; /* 0x102d8be9: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102d8bea: mov ebp, esp */
    g->esp -= 0x14u; /* 0x102d8bec: sub esp, 0x14 - the axis buffer is ebp-0x14..ebp-0xc */

    const uint32_t axis_out = (uint32_t)(g->ebp - 0x14u);
    g->esp -= 4u; /* 0x102d8bef: push dword ptr [ebp+0xc] - the parameter the axis is derived from */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 0xcu)));
    g->esp -= 4u; /* 0x102d8bf2-0x102d8bf5: lea eax,[ebp-0x14] / push eax - where the axis goes */
    wr32(g->esp, axis_out);

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_A); /* 0x102d8bf6 */

    const double angle = (double)rdf32((uint32_t)(g->ebp + 0x10u));  /* 0x102d8bfb */
    const uint32_t self = rd32((uint32_t)(g->ebp + 8u));             /* 0x102d8bfe */
    const float half = (float)(angle * (double)rdf32(COW_ADDR_FLOAT_HALF)); /* 0x102d8c01, and the
                                                                                 float rounding the
                                                                                 fstp/fld pair at
                                                                                 0x102d8c10/0x102d8c1c
                                                                                 imposes */
    g->ecx = self;

    wr32((uint32_t)(g->ebp - 4u), self + 0xcu);  /* 0x102d8c07-0x102d8c0a: where the cosine goes */
    wr32((uint32_t)(g->ebp - 8u), (uint32_t)(g->ebp + 0xcu)); /* 0x102d8c0d/0x102d8c13: where the sine
                                                                  goes - over the parameter word */
    wrf32((uint32_t)(g->ebp + 8u), half);         /* 0x102d8c10: fstp [ebp+8] */

    const uint32_t cos_at = rd32((uint32_t)(g->ebp - 4u));  /* 0x102d8c19 -> edx */
    const uint32_t sin_at = rd32((uint32_t)(g->ebp - 8u));  /* 0x102d8c16 -> eax's first target */

    float axis[3];
    axis[0] = rdf32((uint32_t)(axis_out + 0x00u)); /* 0x102d8c25 */
    axis[1] = rdf32((uint32_t)(axis_out + 0x04u)); /* 0x102d8c2f */
    axis[2] = rdf32((uint32_t)(axis_out + 0x08u)); /* 0x102d8c38 */

    CowQuaternionAxisAngle q;
    cow_quaternion_from_axis_angle(half, axis, &q);

    /* 0x102d8c1f `fsincos` pushes the cosine and then the sine, and the two `fstp` below pop both: the
       entry's net effect on the register stack is nothing, so g->top and g->st[top] - the two FPU facts
       cowdiff compares - come back exactly as the caller left them. The values themselves are computed
       once, in the user function, from the same CRT sin/cos the generated body calls. */
    g->c2 = 0u; /* what fsincos clears, as the generated body does */

    wrf32(cos_at, q.w); /* 0x102d8c21: fstp [edx] - the cosine alone at the address read from ebp-4 */
    wrf32(sin_at, q.s); /* 0x102d8c23: fstp [eax] - the sine OVER the parameter word at ebp+0xc, which
                           is the word the three scales then read at 0x102d8c28/0x102d8c32/0x102d8c3b;
                           writing it here, rather than keeping it in a register, is what makes the
                           order and the rounding observable to the trace */

    wrf32((uint32_t)(self + 0x00u), q.x); /* 0x102d8c2d */
    wrf32((uint32_t)(self + 0x04u), q.y); /* 0x102d8c35 */
    wrf32((uint32_t)(self + 0x08u), q.z); /* 0x102d8c3e */

    g->edx = cos_at; /* 0x102d8c19, and nothing after writes it */
    g->eax = self;   /* 0x102d8c2b: `mov eax,ecx` - the object pointer is the entry's eax */

    g->esp = g->ebp; /* 0x102d8c41: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0xcu); /* 0x102d8c42: ret 0xc - the count is in BYTES, as every other
                                    rt_return in src/ passes it */
}
/* COW_ADAPTER END */
