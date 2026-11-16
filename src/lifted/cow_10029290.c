/* f_0x10029290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10029290(Guest* g)
{
    uint32_t eax;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    edi = sp0 - 0x20u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x20u, 0x20u);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, rd32(COW_IMG(0x103291b4u)), 1, sp0 - 0x20u);   /* kernel32.dll!GlobalMemoryStatus */
    t1 = g->edx;
    t2 = rd32(sp0 - 0x18u) >> 0x14u;
    t3 = rd32(sp0 - 0x18u);
    wr32(self + 4u, t2);
    if ((int32_t)(t3 >> 0x14u) <= 128)
    {
        eax = t2;
        ecx = 0x5a02000u;
        edx = t1;
        edi = 0x4000000u;
    }
    else
    {
        eax = t2;
        edx = t1;
        if ((int32_t)eax > 256)
        {
            wr32(self + 4u, 0x100u);
        }
        eax = (rd32(self + 4u) - 0x80u) << 0x14u;
        ecx = ((rd32(self + 4u) - 0x80u) << 0x14u) + 0x5a02000u;
        edi = ((rd32(self + 4u) - 0x80u) << 0x14u) + 0x4000000u;
    }
    wr32(sp0 - 0x2cu, ecx);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, ecx, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0xcu, t4);
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x2cu, 0x5a02000u);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5a02000u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0xcu, t7);
        ecx = t8;
        edx = t9;
        edi = 0x4000000u;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        goto L_1002932b;
    }
    eax = rd32(self + 0xcu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
L_1002932b: ;
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    t10 = (eax + 0xfu & 0xffffff00u) | (eax + 0xfu & 0xf0u);
    wr32(self + 8u, t10);
    wr32(sp0 - 0x34u, edi - 0x80u);
    wr32(sp0 - 0x38u, t10);
    g->eax = t10;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t11 = cow_cdecl(g, COW_IMG(0x100287b0u), 2, t10, edi - 0x80u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x3cu, 0x9fff80u);
    wr32(sp0 - 0x40u, edi + t10);
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x38u;
    t14 = cow_cdecl(g, COW_IMG(0x100287d0u), 2, edi + t10, 0x9fff80u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x44u, 0xf80u);
    t17 = edi + t10 + 0xa00000u;
    wr32(sp0 - 0x48u, t17);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x40u;
    t18 = cow_cdecl(g, COW_IMG(0x10028810u), 2, t17, 0xf80u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x4cu, 0xffff80u);
    t21 = edi + t10 + 0xa01000u;
    wr32(sp0 - 0x50u, t21);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x48u;
    t22 = cow_cdecl(g, COW_IMG(0x100287f0u), 2, t21, 0xffff80u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x54u, 0xf80u);
    wr32(sp0 - 0x58u, t21 + 0x1000000u);
    g->esp = sp0 - 0x50u;
    t25 = cow_cdecl(g, COW_IMG(0x10028830u), 2, t21 + 0x1000000u, 0xf80u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return (t25 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10029290(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
