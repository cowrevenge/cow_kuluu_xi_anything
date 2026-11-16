/* f_0x10178f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10178f90(Guest* g)
{
    double d10;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    wr32(sp0 - 0x68u, COW_IMG(0x10377874u));
    g->esp = sp0 - 0x64u;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x50u, in_edx, 1, COW_IMG(0x10377874u));
    t1 = g->edx;
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x50u);
    t3 = g->edx;
    wr32(self + 0x343e4u, t2);
    edi = self + 0x37508u;
    eax = 0u;
    ecx = 0xeu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0x39128u, 0u);
    wr32(self + 0x3912cu, 0u);
    g->eax = eax;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t5 = g->edx;
    wr32(sp0 - 0x54u, (uint16_t)t4);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    wr32(sp0 - 0x6cu, self + 0x38e9cu);
    wr32(self + 0x355b0u, 0x44000000u);
    wrf32(self + 0x355b4u, (float)(double)(int32_t)(uint16_t)t4);
    wr32(sp0 - 0x70u, self + 0x38e9cu);
    wr32(self + 0x38e9cu, 0x3f800000u);
    wr32(self + 0x38ea0u, 0u);
    wr32(self + 0x38ea4u, 0u);
    wr32(self + 0x38ea8u, 0u);
    wr32(self + 0x38eacu, 0u);
    wr32(self + 0x38eb0u, 0x3f800000u);
    wr32(self + 0x38eb4u, 0u);
    wr32(self + 0x38eb8u, 0u);
    wr32(self + 0x38ebcu, 0u);
    wr32(self + 0x38ec0u, 0u);
    wr32(self + 0x38ec4u, 0x3f800000u);
    wr32(self + 0x38ec8u, 0u);
    wr32(self + 0x38eccu, 0u);
    wr32(self + 0x38ed0u, 0u);
    wr32(self + 0x38ed4u, 0u);
    wr32(self + 0x38ed8u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f000000u);
    wr32(sp0 - 0x2cu, 0x3f000000u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    g->eax = 0x3f800000u;
    g->ecx = sp0 - 0x40u;
    t6 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, self + 0x38e9cu, self + 0x38e9cu, sp0 - 0x40u);
    t7 = g->ecx;
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x10u, 0x3f000000u);
    wr32(sp0 - 0xcu, 0x3f000000u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    wr32(sp0 - 0x78u, self + 0x38e9cu);
    wr32(sp0 - 0x7cu, self + 0x38e9cu);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, self + 0x38e9cu, self + 0x38e9cu, sp0 - 0x40u);
    t8 = g->edx;
    d9 = fr(g, (double)rdf32(self + 0x355b0u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x164u, (float)d9);
    d10 = fr(g, (double)rdf32(self + 0x355b4u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x168u, (float)d10);
    edi = self + 0x3913cu;
    eax = 0u;
    ecx = 0x11u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = t8;
    g->esp = sp0 - 0x64u;
    cow_thiscall(g, COW_IMG(0x101678e0u), self + 0x178u, 0);
    t11 = g->edx;
    wr32(self + 0x3913cu, 0x3f800000u);
    wr32(self + 0x39140u, 0x3f800000u);
    wr32(self + 0x39144u, 0x3f800000u);
    wr32(self + 0x39148u, 0u);
    wr32(self + 0x3914cu, 0x3f333333u);
    wr32(self + 0x39150u, 0x3f333333u);
    wr32(self + 0x39154u, 0x3f333333u);
    wr32(self + 0x39158u, 0u);
    wr32(self + 0x3915cu, 0u);
    wr32(self + 0x39160u, 0u);
    wr32(self + 0x39164u, 0u);
    wr32(self + 0x39168u, 0u);
    wr32(self + 0x3917cu, 0x42480000u);
    g->edx = t11;
    t12 = cow_call_regs(g, COW_IMG(0x10173b50u), 0x3f333333u, self + 0x34330u, g->edx, 1, 0);
    t13 = g->edx;
    cow_call_regs(g, COW_IMG(0x10173a20u), t12, self + 0x34330u, g->edx, 1, 0);
    t14 = rd32(self + 0x394a0u);
    wr32(self + 0x3949cu, t14);
    if (rd32(COW_IMG(0x1065cb04u)) != 0u)
    {
        eax = t14;
        ecx = rd32(COW_IMG(0x1065cb04u));
        if (rd32(ecx + 0x1b4u) == 0xb6u) goto L_101791cf;
        ecx = rd32(ecx + 0x1b4u) - 0xb6u;
        if (ecx == 0x21du) goto L_101791cf;
        ecx = ecx - 0x21du;
        if (ecx != 0x13u) goto L_101791da;
L_101791cf: ;
        if (eax == 1u)
        {
            wr32(self + 0x3949cu, 0u);
        }
    }
L_101791da: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10178f90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
