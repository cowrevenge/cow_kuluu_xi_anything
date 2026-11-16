/* f_0x10287640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10287640(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 8u);
    }
    else
    {
        ebx = rd32(sp0 + 8u);
        g->ecx = self;
        g->esp = sp0 - 0x10u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, ebx, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ebx = ebx;
        g->ecx = t2;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8808u), t1, ebx, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10285f20u), g->eax, g->ecx, edx, 1, 3, ebx, in_edi, in_esi);
    t6 = rd32(arg1 + 0x5cu);
    t7 = rd32(arg1 + 0x58u);
    t8 = rd32(arg1 + 0x5cu);
    wr32(sp0 + 8u, t6);
    if ((int32_t)t8 > (int32_t)t7)
    {
        ecx = t7;
    }
    else
    {
        ecx = t7;
        wr32(sp0 + 8u, ecx);
    }
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        eax = rd32(sp0 + 8u);
        goto L_10287703;
    }
    ebp = 0u;
L_10287697: ;
    if ((int32_t)ebp >= (int32_t)rd32(arg1 + 0x58u)) goto L_102876a5;
    if ((rd8(ebp * 4u + rd32(arg1 + 0x54u)) & 0x20u) == 0u)
    {
        ecx = rd32(arg1 + 0x54u);
        goto L_102876fa;
    }
    ecx = rd32(arg1 + 0x54u);
L_102876a5: ;
    g->ecx = ecx;
    t9 = rd32(arg1 + 0x50u);
    t10 = rd32(ebp * 4u + rd32(arg1 + 0x50u));
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t9, 1, 3, ebx, in_edi, in_esi);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    esi = t10;
    loc_4 = t11;
    loc_8 = 4u;
L_102876c0: ;
    edi = 4u;
L_102876c5: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 7, rd32(esi), ebx, in_edi, in_esi, in_ebp, in_ebx, loc_8);
    t14 = g->ecx;
    t15 = g->edx;
    if (edi != 1u)
    {
        ecx = t14;
        edx = t15;
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_102876c5;
    }
    ecx = t14;
    edx = t15;
    esi = esi + 4u;
    if (loc_8 != 1u)
    {
        loc_8 = loc_8 - 1u;
        goto L_102876c0;
    }
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t16 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, ebx, in_edi, in_esi);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 - loc_4 != 0x40u)
    {
        eax = t16 - loc_4;
        ecx = t17;
        edx = t18;
        esi = loc_4;
        goto L_1028770d;
    }
    ecx = t17;
L_102876fa: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(sp0 + 8u))
    {
        ebp = ebp + 1u;
        goto L_10287697;
    }
    eax = rd32(sp0 + 8u);
L_10287703: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1028770d: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b87e4u), ebp);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    t21 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t20, 1, 3, ebx, COW_IMG(0x103b87e4u), ebp);
    t22 = g->ecx;
    t23 = g->edx;
    g->eax = t21 - esi;
    g->esp = sp0 - 0x28u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), 0x40u);
    g->ebx = in_ebx;
    return t24 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
