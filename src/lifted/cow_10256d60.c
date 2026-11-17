/* f_0x10256d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10256d60(Guest* g)
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
    uint32_t t26;
    uint32_t t27;
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
        if (ebx == 0u) goto L_10256e4e;
        if (ebx != eax) goto L_10256e4e;
        if (rd32(arg1 + 4u) != 0u)
        {
            eax = rd32(arg1 + 4u);
        }
        else
        {
            eax = COW_IMG(0x1033ce70u);
        }
        if (rd8(eax - 1u) >= 0xfeu) goto L_10256e4e;
        if (rd32(self + 4u) != 0u)
        {
            eax = rd32(self + 4u);
            if (rd8(eax - 1u) == 0u)
            {
                ecx = (self & 0xffffff00u) | rd8(eax - 1u);
                eax = eax - 1u;
                goto L_10256e17;
            }
            ecx = (self & 0xffffff00u) | rd8(eax - 1u);
            eax = eax - 1u;
            if ((uint8_t)ecx == 0xffu) goto L_10256e17;
            wr8(eax, (uint8_t)((uint8_t)ecx - 1u));
        }
L_10256e20: ;
        wr32(self + 4u, 0u);
        wr32(self + 8u, 0u);
        wr32(self + 0xcu, 0u);
        if (rd32(arg1 + 4u) != 0u)
        {
            eax = rd32(arg1 + 4u);
        }
        else
        {
            eax = COW_IMG(0x1033ce70u);
        }
        wr32(self + 4u, eax);
        t18 = rd32(arg1 + 8u);
        wr32(self + 8u, t18);
        t19 = rd32(arg1 + 0xcu);
        wr32(self + 0xcu, t19);
        t20 = rd8(eax - 1u);
        wr8(eax - 1u, (uint8_t)(t20 + 1u));
        ecx = (t18 & 0xffffff00u) | (uint8_t)(t20 + 1u);
        edx = t19;
        esi = arg1;
    }
    else
    {
        if (rd32(self + 8u) >= ebx)
        {
            eax = rd32(self + 8u);
            edx = in_edx;
            esi = arg1;
        }
        else
        {
            eax = rd32(self + 8u);
            g->esi = arg1;
            g->ebp = self;
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t2 = cow_stdcall(g, COW_IMG(0x1032708cu), 0);
            t3 = g->edx;
            t4 = g->esi;
            eax = t2;
            edx = t3;
            esi = t4;
        }
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10255b00u), self, 0);
        t5 = g->edx;
        if (rd32(self + 8u) - ebx >= 0xffffffffu)
        {
            eax = rd32(self + 8u) - ebx;
            edi = 0xffffffffu;
            goto L_10256da1;
        }
        eax = rd32(self + 8u) - ebx;
        edx = t5;
        if (eax == 0u) goto L_10256dd5;
        edi = eax;
L_10256da1: ;
        t6 = ebx + edi + rd32(self + 4u);
        t7 = ebx + rd32(self + 4u);
        g->eax = eax - edi;
        g->edx = t6;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t7, t6, eax - edi, in_edi, in_esi);
        t9 = g->edx;
        t10 = rd32(self + 8u) - edi;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t11 = cow_fastcall(g, COW_IMG(0x10255260u), self, t9, 2, t10, 0u);
        t12 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            eax = t11;
            edx = t12;
            ebx = t7;
        }
        else
        {
            eax = t11;
            edx = t12;
            ebx = t7;
            esi = t10;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t13 = cow_thiscall(g, COW_IMG(0x102559c0u), self, 1, esi);
            t14 = g->edx;
            eax = t13;
            edx = t14;
        }
        esi = arg1;
L_10256dd5: ;
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_thiscall(g, COW_IMG(0x10255b00u), self, 0);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
L_10256e89: ;
    t26 = rd16(esi + 0x10u);
    wr16(self + 0x10u, (uint16_t)t26);
    wr16(self + 0x12u, rd16(esi + 0x12u));
    wr16(self + 0x14u, rd16(esi + 0x14u));
    wr16(self + 0x16u, rd16(esi + 0x16u));
    t27 = rd32(esi + 0x18u);
    wr32(self + 0x18u, t27);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    return self;
L_10256e17: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, in_edx, 1, 1, eax);
    goto L_10256e20;
L_10256e4e: ;
    g->ebp = self;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t21 = cow_fastcall(g, COW_IMG(0x10255260u), self, in_edx, 2, ebx, 1u);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        esi = arg1;
    }
    else
    {
        edx = t23;
        if (rd32(arg1 + 4u) != 0u)
        {
            esi = rd32(arg1 + 4u);
        }
        else
        {
            esi = COW_IMG(0x1033ce70u);
        }
        t24 = rd32(self + 4u);
        edi = t24;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t25 = rd32(self + 4u);
        wr32(self + 8u, ebx);
        wr8(ebx + t25, 0u);
        eax = ebx;
        ecx = t25;
        esi = arg1;
    }
    goto L_10256e89;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10256d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10256d60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
