/* f_0x102abb10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102abb10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x4cu, 0u);
    if ((int32_t)arg4 <= 0)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x50u, in_ebx);
        wr32(sp0 - 0x54u, in_ebp);
        wr32(sp0 - 0x58u, in_esi);
        wr32(sp0 - 0x5cu, in_edi);
        t1 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t1);
        loc_4c = 0u;
L_102abb3e: ;
        t2 = rd32(arg1 + rd32(arg2 + loc_4c * 4u) * 4u);
        wr32(sp0 - 0x48u, t2);
        t3 = rd32(arg1 + rd32(arg2 + loc_4c * 4u) * 4u + 4u);
        wr32(sp0 - 0x44u, t3);
        t4 = rd32(arg1 + rd32(arg2 + loc_4c * 4u) * 4u + 8u);
        wr32(sp0 - 0x40u, t4);
        eax = sp0 - 0x20u;
        edx = 0u;
        edi = rd32(sp0 + 0xcu);
        loc_48 = t2;
        loc_44 = t3;
        loc_40 = t4;
L_102abb66: ;
        t5 = rd32(edi);
        wr32(edx * 4u + sp0 - 0x30u, t5);
        if (t5 == 0xffffffffu)
        {
            wr32(eax - 4u, 0xffffffffu);
            wr32(eax, 0xffffffffu);
            wr32(eax + 4u, 0xffffffffu);
        }
        else
        {
            ecx = t5;
            t6 = rd32(arg1 + rd32(arg2 + ecx * 4u) * 4u);
            wr32(eax - 4u, t6);
            t7 = rd32(arg1 + rd32(arg2 + ecx * 4u) * 4u + 4u);
            wr32(eax, t7);
            t8 = rd32(arg1 + rd32(arg2 + ecx * 4u) * 4u + 8u);
            wr32(eax + 4u, t8);
        }
        if ((int32_t)(edx + 1u) < 3)
        {
            eax = eax + 0xcu;
            edx = edx + 1u;
            edi = edi + 4u;
            goto L_102abb66;
        }
        edi = edi + 4u;
        wr32(sp0 - 0x60u, sp0 - 0x3cu);
        wr32(sp0 - 0x64u, sp0 - 0xcu);
        wr32(sp0 - 0x68u, sp0 - 0x18u);
        wr32(sp0 - 0x6cu, sp0 - 0x24u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x102abc10u), sp0 - 0x48u, g->ecx, g->edx, 1, 13, sp0 - 0x48u, sp0 - 0x24u, sp0 - 0x18u, sp0 - 0xcu, sp0 - 0x3cu, in_edi, in_esi, in_ebp, in_ebx, loc_4c, loc_48, loc_44, loc_40);
        eax = 0u;
        edx = rd32(sp0 + 0xcu);
L_102abbcc: ;
        if (rd32(eax * 4u + sp0 - 0x3cu) != 0xffffffffu)
        {
            ecx = rd32(eax * 4u + sp0 - 0x3cu);
            t9 = rd32(ecx * 4u + sp0 - 0x30u);
            wr32(edx, t9);
        }
        if ((int32_t)(eax + 1u) < 3)
        {
            eax = eax + 1u;
            edx = edx + 4u;
            goto L_102abbcc;
        }
        t10 = rd32(sp0 - 0x4cu);
        wr32(sp0 + 0xcu, edi);
        wr32(sp0 - 0x4cu, t10 + 1u);
        if ((int32_t)(t10 + 1u) < (int32_t)arg4)
        {
            loc_4c = t10 + 1u;
            goto L_102abb3e;
        }
        ebx = rd32(sp0 - 0x50u);
        ebp = rd32(sp0 - 0x54u);
        esi = rd32(sp0 - 0x58u);
        edi = rd32(sp0 - 0x5cu);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102abb10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102abb10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
