/* f_0x102ed705 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102ed705(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x10u) == 0xceu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(rd32(arg1) + 0x14u, 0x12u);
        t1 = rd32(arg1 + 0x10u);
        wr32(rd32(arg1) + 0x18u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), t1, 1, arg1);
        t2 = g->edx;
        ecx = arg1;
        edx = t2;
    }
    if (rd32(arg1 + 0x78u) < rd32(arg1 + 0x60u))
    {
        eax = rd32(arg1 + 0x78u);
        goto L_102ed749;
    }
    wr32(rd32(arg1) + 0x14u, 0x77u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1) + 4u), ecx, 2, arg1, 0xffffffffu);
    t3 = g->edx;
    g->edx = t3;
    return 0u;
L_102ed749: ;
    if (rd32(arg1 + 8u) == 0u)
    {
        ecx = rd32(arg1 + 8u);
    }
    else
    {
        ecx = rd32(arg1 + 8u);
        wr32(ecx + 4u, eax);
        t4 = rd32(arg1 + 0x60u);
        wr32(rd32(arg1 + 8u) + 8u, t4);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1 + 8u)), t4, 1, arg1);
        t5 = g->edx;
        ecx = arg1;
        edx = t5;
    }
    if (arg3 >= rd32(arg1 + 0x114u) * rd32(arg1 + 0x110u))
    {
        edi = rd32(arg1 + 0x114u) * rd32(arg1 + 0x110u);
    }
    else
    {
        edi = rd32(arg1 + 0x114u) * rd32(arg1 + 0x110u);
        wr32(rd32(arg1) + 0x14u, 0x15u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), ecx, 1, arg1);
        t6 = g->edx;
        ecx = arg1;
        edx = t6;
    }
    g->eax = rd32(arg1 + 0x184u);
    g->edx = edx;
    t7 = rd32(arg1 + 0x184u);
    g->esp = sp0 - 8u;
    t8 = cow_thiscall_cdecl(g, rd32(t7 + 0xcu), ecx, 2, arg1, arg2);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        wr32(arg1 + 0x78u, edi + rd32(arg1 + 0x78u));
        eax = edi;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed705(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed705(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
