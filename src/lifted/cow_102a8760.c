/* f_0x102a8760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a8760(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    wr32(sp0 - 0x3cu, arg2);
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x102a8890u), self, 2, arg2, sp0 - 0x28u);
    if (t1 != 0u) goto L_102a8797;
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x28u, 0u);
    return arg1 & 0xffffff00u;
L_102a8797: ;
    wr32(sp0 - 0x38u, 0x15eu);
    wr32(sp0 - 0x3cu, COW_IMG(0x103be560u));
    t2 = (uint16_t)rd32(sp0 - 0x1eu) * (uint16_t)rd32(sp0 - 0x20u) * (uint16_t)rd32(sp0 - 0x22u);
    wr32(sp0 - 0x40u, t2);
    wr32(sp0 - 0x44u, 1u);
    g->ecx = (uint16_t)rd32(sp0 - 0x20u);
    g->edx = (uint16_t)rd32(sp0 - 0x22u);
    t3 = rd32(sp0 - 0x20u);
    t4 = rd32(sp0 - 0x22u);
    g->esp = sp0 - 0x20u;
    t5 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t2, COW_IMG(0x103be560u), 0x15eu, in_edi, in_esi, in_ebx, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(arg1 + 0x28u, t5);
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_102a8806;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    wr32(sp0 - 0x38u, 0x160u);
    wr32(sp0 - 0x3cu, COW_IMG(0x103be560u));
    wr32(sp0 - 0x40u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be560u));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x44u, COW_IMG(0x103be550u));
    g->esp = sp0 - 0x3cu;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be550u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return t11 & 0xffffff00u;
L_102a8806: ;
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    wr32(sp0 - 0x3cu, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t12 = cow_call_regs(g, COW_IMG(0x102a8960u), sp0 - 0x28u, g->ecx, g->edx, 1, 4, arg2, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t13 = g->edx;
    if (t12 != 0u) goto L_102a883a;
    edx = t13;
    wr32(sp0 - 0x38u, 0x167u);
    wr32(sp0 - 0x3cu, COW_IMG(0x103be560u));
    t14 = rd32(arg1 + 0x28u);
    wr32(sp0 - 0x40u, t14);
    g->esp = sp0 - 0x34u;
    t15 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t14, COW_IMG(0x103be560u), 0x167u);
    wr32(arg1 + 0x28u, 0u);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return t15 & 0xffffff00u;
L_102a883a: ;
    t16 = (uint16_t)rd32(sp0 - 0x22u);
    t17 = rd32(sp0 - 0x20u);
    t18 = rd32(sp0 - 0x1eu);
    wr32(arg1 + 0x1cu, t16);
    wr32(sp0 - 0x38u, arg1);
    wr32(sp0 - 0x3cu, sp0 - 0x28u);
    wr32(arg1 + 0x20u, (uint16_t)t17);
    wr32(arg1 + 0x24u, (uint16_t)t18);
    g->ecx = (uint16_t)t18;
    g->edx = sp0 - 0x28u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102a8bb0u), 5, sp0 - 0x28u, arg1, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    t21 = cow_cdecl(g, COW_IMG(0x102a8b50u), 3, sp0 - 0x28u, sp0 - 0x28u, arg1);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (t21 & 0xffffff00u) | (uint8_t)(t21 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a8760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
