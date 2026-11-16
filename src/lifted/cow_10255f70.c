/* f_0x10255f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10255f70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(self, rd8(arg1));
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    t1 = rd32(arg1 + 8u);
    if (t1 <= 0xffffffffu)
    {
        eax = t1;
        ebx = t1;
    }
    else
    {
        eax = t1;
        ebx = t1;
        ebx = 0xffffffffu;
    }
    if (self != arg1)
    {
        if (ebx == 0u) goto L_10256046;
        if (ebx != eax) goto L_10256046;
        if (rd32(arg1 + 4u) != 0u)
        {
            eax = rd32(arg1 + 4u);
        }
        else
        {
            eax = COW_IMG(0x1033ce70u);
        }
        if (rd8(eax - 1u) >= 0xfeu) goto L_10256046;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10255380u), eax, self, in_edx, 0, 1, 1u);
        if (rd32(arg1 + 4u) != 0u)
        {
            eax = rd32(arg1 + 4u);
        }
        else
        {
            eax = COW_IMG(0x1033ce70u);
        }
        wr32(self + 4u, eax);
        t16 = rd32(arg1 + 8u);
        wr32(self + 8u, t16);
        t17 = rd32(arg1 + 0xcu);
        wr32(self + 0xcu, t17);
        t18 = rd8(eax - 1u);
        wr8(eax - 1u, (uint8_t)(t18 + 1u));
        ecx = (t16 & 0xffffff00u) | (uint8_t)(t18 + 1u);
        edx = t17;
    }
    else
    {
        if (ebx == 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->ebp = self;
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t2 = cow_stdcall(g, COW_IMG(0x1032708cu), 0);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
        g->ebx = ebx;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x10255b00u), self, edx, 0);
        t4 = g->edx;
        if (rd32(self + 8u) - ebx >= 0xffffffffu)
        {
            eax = rd32(self + 8u) - ebx;
            edi = 0xffffffffu;
            goto L_10255fbe;
        }
        eax = rd32(self + 8u) - ebx;
        edx = t4;
        if (eax == 0u) goto L_10255ff2;
        edi = eax;
L_10255fbe: ;
        t5 = ebx + edi + rd32(self + 4u);
        t6 = ebx + rd32(self + 4u);
        g->edx = t5;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10314a10u), 5, t6, t5, eax - edi, in_edi, in_esi);
        t7 = g->edx;
        t8 = rd32(self + 8u) - edi;
        g->edx = t7;
        g->esp = sp0 - 0x10u;
        t9 = cow_thiscall(g, COW_IMG(0x10255260u), self, 2, t8, 0u);
        t10 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            eax = t9;
            edx = t10;
            ebx = t6;
        }
        else
        {
            eax = t9;
            edx = t10;
            ebx = t6;
            esi = t8;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_thiscall(g, COW_IMG(0x102559c0u), self, 1, esi);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
L_10255ff2: ;
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t13 = cow_fastcall(g, COW_IMG(0x10255b00u), self, edx, 0);
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    }
L_10256081: ;
    t24 = rd16(arg1 + 0x10u);
    wr16(self + 0x10u, (uint16_t)t24);
    wr16(self + 0x12u, rd16(arg1 + 0x12u));
    wr16(self + 0x14u, rd16(arg1 + 0x14u));
    wr16(self + 0x16u, rd16(arg1 + 0x16u));
    t25 = rd32(arg1 + 0x18u);
    wr32(self + 0x18u, t25);
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return self;
L_10256046: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x10255260u), self, 2, ebx, 1u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    else
    {
        edx = t21;
        if (rd32(arg1 + 4u) != 0u)
        {
            esi = rd32(arg1 + 4u);
        }
        else
        {
            esi = COW_IMG(0x1033ce70u);
        }
        t22 = rd32(self + 4u);
        edi = t22;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t23 = rd32(self + 4u);
        wr32(self + 8u, ebx);
        wr8(ebx + t23, 0u);
        eax = ebx;
        ecx = t23;
    }
    goto L_10256081;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10255f70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
