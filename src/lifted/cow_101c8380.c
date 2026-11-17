/* f_0x101c8380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c8380(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101c5a30u), self + 0xcu, 1, t1);
    t3 = g->edx;
    g->ebx = t1;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), rd32(COW_IMG(0x10662dccu)), 1, t1);
    t5 = g->edx;
    wr32(sp0 + 4u, t4);
    if (t4 < 0x40u) goto L_101c843d;
    eax = t4;
    edx = t5;
    ebx = t1;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, ebx, self + 0x18u, 0x40u, 0u);
    t7 = g->edx;
    if (t6 == 0u) goto L_101c843d;
    eax = t6;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10257bc0u), self + 0x58u, 2, self + 0x18u, 0x40u);
    t8 = g->edx;
    if (rd32(sp0 + 4u) != rd32(self + 0x2cu)) goto L_101c8418;
    eax = rd32(sp0 + 4u);
    edx = t8;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10257be0u), self + 0x58u, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 + 4u, t9);
    if (t9 == 0u)
    {
        eax = t9;
        edx = t11;
        goto L_101c8428;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
    t13 = g->edx;
    t14 = rd32(sp0 + 4u);
    g->ebx = ebx;
    g->edx = t13;
    t15 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x101c4740u), t15, 4, ebx, t12, t14, 0x40u);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t18;
        loc_14 = t12;
        goto L_101c8421;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    loc_14 = t12;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_14);
L_101c8418: ;
    g->ebx = in_ebx;
    return 0u;
L_101c8421: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x10257bf0u), self + 0x58u, 1, loc_14);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_101c8428: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x10257c80u), self + 0x58u, 0);
    wr32(self, t21);
    g->ebx = in_ebx;
    return 1u;
L_101c843d: ;
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c8380(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
