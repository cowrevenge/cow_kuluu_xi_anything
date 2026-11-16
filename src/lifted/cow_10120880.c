/* f_0x10120880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10120880(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, COW_IMG(0x1036cf30u));
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, in_edx, 1, COW_IMG(0x1036cf30u));
    t1 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x1036cf44u));
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036cf44u));
    t3 = g->edx;
    wr32(sp0 - 0x14u, t2);
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        loc_14 = t2;
        wr32(sp0 - 0x1cu, 0x20u);
        if (rd32(rd32(eax)) != 0u)
        {
            eax = rd32(rd32(eax));
            ebx = 0u;
            ebp = 0u;
            edi = self + 0x38u;
            loc_1c = 0x20u;
L_101208cd: ;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t4 = cow_thiscall(g, COW_IMG(0x10126500u), eax + 4u, 0);
            t5 = g->edx;
            wr32(sp0 - 0x18u, t4);
            wr32(sp0 - 0x30u, sp0 - 0x18u);
            g->ecx = eax + 4u;
            t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, t5, 0, 1, sp0 - 0x18u);
            t7 = g->ecx;
            t8 = g->edx;
            if (t6 == 0u) goto L_10120938;
            eax = t6;
            ecx = t7;
            edx = t8;
            wr32(sp0 - 0x30u, eax + 0x32u);
            g->esp = sp0 - 0x2cu;
            cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, ecx, edx, 1, 1, eax + 0x32u);
            t9 = g->ecx;
            wr32(sp0 - 0x34u, 0x10u);
            wr32(sp0 - 0x38u, sp0 - 0x10u);
            wr32(sp0 - 0x3cu, eax + 0x32u);
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x28u;
            t10 = cow_cdecl(g, COW_IMG(0x10312980u), 5, eax + 0x32u, sp0 - 0x10u, 0x10u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t11 = g->edx;
            if (t10 == 0u) goto L_10120934;
            edx = t11;
            esi = eax + 0x32u;
            eax = t10;
            wr32(sp0 - 0x30u, esi);
            g->esp = sp0 - 0x2cu;
            cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, edx, 1, esi);
            t12 = g->edx;
            wr32(sp0 - 0x30u, sp0 - 0x10u);
            g->ebx = ebx;
            t13 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x10u);
            t14 = rd32(sp0 - 0x1cu);
            wr32(edi - 8u, t13);
            wr32(edi, t14);
            if ((int32_t)(ebx + 1u) >= 2) goto L_10120948;
            ebx = ebx + 1u;
            edi = edi + 4u;
L_10120934: ;
            t15 = rd32(sp0 - 0x1cu) + 1u;
            wr32(sp0 - 0x1cu, t15);
            loc_1c = t15;
L_10120938: ;
            if (rd32(ebp + rd32(rd32(sp0 - 0x14u)) + 4u) != 0u)
            {
                eax = rd32(ebp + rd32(rd32(sp0 - 0x14u)) + 4u);
                edx = rd32(sp0 - 0x14u);
                ebp = ebp + 4u;
                goto L_101208cd;
            }
        }
    }
L_10120948: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10120880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
