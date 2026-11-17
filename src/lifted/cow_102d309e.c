/* f_0x102d309e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_102d309e(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (arg1 == 0u) goto L_102d30af;
    if (arg9 != 0u) goto L_102d30b6;
L_102d30af: ;
    eax = 0x8876086cu;
    edx = in_edx;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_8 = in_esi;
L_102d3106: ;
    g->esi = loc_8;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102d30b6: ;
    wr32(sp0 - 0xcu, in_edi);
    if (arg6 != 0xffffffffu)
    {
        edi = arg6;
    }
    else
    {
        edi = 0u;
    }
    wr32(sp0 - 0x10u, arg8);
    wr32(sp0 - 0x14u, sp0 + 0x1cu);
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, sp0 + 0x14u);
    wr32(sp0 - 0x20u, sp0 + 0x10u);
    wr32(sp0 - 0x24u, sp0 + 0xcu);
    wr32(sp0 - 0x28u, sp0 + 8u);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = sp0 + 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x102d2fb0u), 8, arg1, sp0 + 8u, sp0 + 0xcu, sp0 + 0x10u, sp0 + 0x14u, edi, sp0 + 0x1cu, arg8);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x10u, arg9);
        wr32(sp0 - 0x14u, arg8);
        wr32(sp0 - 0x18u, arg7);
        wr32(sp0 - 0x1cu, edi);
        wr32(sp0 - 0x20u, arg5);
        wr32(sp0 - 0x24u, arg4);
        wr32(sp0 - 0x28u, arg3);
        wr32(sp0 - 0x2cu, arg2);
        wr32(sp0 - 0x30u, arg1);
        g->eax = rd32(arg1);
        g->edx = edx;
        t4 = rd32(arg1);
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, rd32(t4 + 0x54u), ecx, 9, arg1, arg2, arg3, arg4, arg5, edi, arg7, arg8, arg9);
        t6 = g->edx;
        if ((int32_t)t5 < 0)
        {
            eax = t5;
            edx = t6;
        }
        else
        {
            edx = t6;
            eax = 0u;
        }
    }
    edi = rd32(sp0 - 0xcu);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_102d3106;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d309e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d309e(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
