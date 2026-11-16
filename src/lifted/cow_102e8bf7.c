/* f_0x102e8bf7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102e8bf7(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    if (arg2 != 0u)
    {
        wr32(sp0 - 0x2cu, in_esi);
        if (rd32(arg1 + 0x460u) != 0u)
        {
            edx = in_edx;
            goto L_102e8c5c;
        }
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, arg2);
        g->edx = in_edx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(arg2) + 0x38u), sp0 - 0x24u, 3, arg2, 0u, sp0 - 0x24u);
        t1 = g->edx;
        if (rd32(sp0 - 0x24u) != rd32(arg1 + 0x10u))
        {
            edx = t1;
            goto L_102e8c5c;
        }
        edx = t1;
        if (rd32(sp0 - 0xcu) != rd32(arg1 + 0xcu)) goto L_102e8c5c;
        eax = rd32(arg1 + 0xcu);
        if (rd32(sp0 - 8u) != eax) goto L_102e8c5c;
        g->esp = sp0 - 0x2cu;
        t2 = cow_fastcall(g, COW_IMG(0x102e8984u), arg1, edx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        if ((int32_t)t2 < 0)
        {
            eax = t2;
            edx = t4;
        }
        else
        {
            ecx = t3;
            edx = t4;
            wr32(arg1 + 0x34u, arg2);
            wr32(sp0 - 0x30u, arg2);
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, rd32(rd32(arg2) + 4u), ecx, 1, arg2);
            t5 = g->edx;
            wr32(arg1 + 0x460u, 1u);
            eax = 0u;
            edx = t5;
        }
L_102e8c61: ;
        esi = loc_2c;
    }
    else
    {
        eax = 0x8876086cu;
        edx = in_edx;
        esi = in_esi;
        loc_4 = in_ebp;
        loc_28 = in_edi;
    }
    g->esi = esi;
    g->edi = loc_28;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e8c5c: ;
    eax = 0x8876086cu;
    loc_4 = in_ebp;
    loc_28 = in_edi;
    loc_2c = in_esi;
    goto L_102e8c61;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8bf7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e8bf7(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
