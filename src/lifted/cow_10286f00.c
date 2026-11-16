/* f_0x10286f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10286f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, ebx, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ebx = ebx;
        g->ecx = t2;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b865cu), t1, ebx, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10285f20u), g->eax, g->ecx, edx, 1, 3, ebx, in_edi, in_esi);
    t6 = g->edx;
    if ((int32_t)rd32(arg1 + 0x38u) > (int32_t)rd32(arg1 + 0x34u))
    {
        eax = rd32(arg1 + 0x38u);
        edx = t6;
    }
    else
    {
        ecx = rd32(arg1 + 0x34u);
        edx = t6;
        eax = ecx;
    }
    wr32(sp0 + 8u, eax);
    if ((int32_t)eax <= 0) goto L_10286f91;
    edi = 0u;
L_10286f4d: ;
    if (rd32(rd32(edi * 4u + rd32(arg1 + 0x2cu))) == 0xf0001u)
    {
        eax = rd32(edi * 4u + rd32(arg1 + 0x2cu));
        ecx = rd32(rd32(edi * 4u + rd32(arg1 + 0x2cu))) - 0xf0001u;
        goto L_10286f79;
    }
    eax = rd32(edi * 4u + rd32(arg1 + 0x2cu));
    ecx = rd32(rd32(edi * 4u + rd32(arg1 + 0x2cu))) - 0xf0001u;
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_10286f6f;
    }
    ecx = ecx - 1u;
    if (ecx != 3u) goto L_10286f88;
    ecx = ecx - 3u;
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x10287540u), g->eax, g->ecx, edx, 1, 3, arg1, eax, ebx);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
L_10286f81: ;
    if ((uint8_t)eax == 0u) goto L_10286f97;
L_10286f88: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 + 8u))
    {
        edi = edi + 1u;
        goto L_10286f4d;
    }
    eax = rd32(sp0 + 8u);
L_10286f91: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_10286f6f: ;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x102873f0u), g->eax, g->ecx, edx, 1, 3, arg1, eax, ebx);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    goto L_10286f81;
L_10286f79: ;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t13 = cow_call_regs(g, COW_IMG(0x10286fb0u), g->eax, g->ecx, edx, 1, 3, arg1, eax, ebx);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    goto L_10286f81;
L_10286f97: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8644u), edi);
    g->ebx = in_ebx;
    return t16 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10286f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10286f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
