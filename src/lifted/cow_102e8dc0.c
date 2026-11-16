/* f_0x102e8dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102e8dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_edi);
    if (arg2 != 0u) goto L_102e8de0;
    if (arg3 != 0u) goto L_102e8de0;
    eax = 0x8876086cu;
    edx = in_edx;
L_102e8e8f: ;
    g->edx = edx;
    return eax;
L_102e8de0: ;
    wr32(sp0 - 0x30u, in_esi);
    if (rd32(arg1 + 0x460u) == 0u)
    {
        if (arg2 == 0u)
        {
            edx = in_edx;
            goto L_102e8e2c;
        }
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, arg2);
        g->edx = in_edx;
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, rd32(rd32(arg2) + 0x38u), sp0 - 0x24u, 3, arg2, 0u, sp0 - 0x24u);
        t1 = g->edx;
        if (rd32(sp0 - 0x24u) == rd32(arg1 + 0x10u))
        {
            edx = t1;
            goto L_102e8e16;
        }
        edx = t1;
L_102e8e0f: ;
        eax = 0x8876086cu;
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
    }
L_102e8e8e: ;
    goto L_102e8e8f;
L_102e8e16: ;
    if (rd32(sp0 - 0xcu) != rd32(arg1 + 0xcu)) goto L_102e8e0f;
    eax = rd32(arg1 + 0xcu);
    if (rd32(sp0 - 8u) != eax) goto L_102e8e0f;
    t2 = rd32(sp0 - 0x1cu) & 1u;
    wr32(arg1 + 0x48u, t2);
L_102e8e2c: ;
    if (arg3 == 0u) goto L_102e8e5a;
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, arg3);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(rd32(arg3) + 0x38u), sp0 - 0x24u, 3, arg3, 0u, sp0 - 0x24u);
    t3 = g->edx;
    if (rd32(sp0 - 0x24u) != rd32(arg1 + 0x10u))
    {
        edx = t3;
        goto L_102e8e0f;
    }
    edx = t3;
    if (rd32(sp0 - 0xcu) != rd32(arg1 + 0xcu)) goto L_102e8e0f;
    eax = rd32(arg1 + 0xcu);
    if (rd32(sp0 - 8u) != eax) goto L_102e8e0f;
    t4 = rd32(sp0 - 0x1cu) & 1u;
    wr32(arg1 + 0x4cu, t4);
L_102e8e5a: ;
    g->esp = sp0 - 0x30u;
    t5 = cow_fastcall(g, COW_IMG(0x102e8984u), arg1, edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 < 0)
    {
        eax = t5;
        edx = t7;
    }
    else
    {
        ecx = t6;
        edx = t7;
        wr32(arg1 + 0x38u, arg2);
        wr32(arg1 + 0x3cu, arg3);
        if (arg2 != 0u)
        {
            wr32(sp0 - 0x34u, arg2);
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(rd32(arg2) + 4u), ecx, 1, arg2);
            t8 = g->edx;
            edx = t8;
        }
        if (rd32(arg1 + 0x3cu) != 0u)
        {
            eax = rd32(arg1 + 0x3cu);
            wr32(sp0 - 0x34u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(rd32(eax) + 4u), rd32(eax), 1, eax);
            t9 = g->edx;
            edx = t9;
        }
        wr32(arg1 + 0x460u, 4u);
        eax = 0u;
    }
    goto L_102e8e8e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e8dc0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
