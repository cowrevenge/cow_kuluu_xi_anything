/* f_0x10256c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10256c40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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

    t1 = rd8(arg1);
    wr32(self + 4u, 0u);
    wr8(self, (uint8_t)t1);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    t2 = rd32(arg1 + 8u);
    if (t2 <= 0xffffffffu)
    {
        eax = t2;
        ebp = t2;
    }
    else
    {
        eax = t2;
        ebp = t2;
        ebp = 0xffffffffu;
    }
    if (self != arg1) goto L_10256ccd;
    if (ebp == 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->ebp = ebp;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_stdcall(g, COW_IMG(0x1032708cu), 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->ebx = self;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x10255b00u), self, edx, 0);
    t5 = g->edx;
    if (rd32(self + 8u) - ebp >= 0xffffffffu)
    {
        eax = rd32(self + 8u) - ebp;
        edi = 0xffffffffu;
        goto L_10256c8d;
    }
    eax = rd32(self + 8u) - ebp;
    edx = t5;
    if (eax == 0u) goto L_10256cbd;
    edi = eax;
L_10256c8d: ;
    t6 = ebp + edi + rd32(self + 4u);
    t7 = ebp + rd32(self + 4u);
    g->eax = eax - edi;
    g->edx = t6;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t7, t6, eax - edi, in_edi, in_esi);
    t9 = g->edx;
    t10 = rd32(self + 8u) - edi;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10255260u), self, 2, t10, 0u);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        eax = t11;
        edx = t12;
        esi = t10;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, COW_IMG(0x102559c0u), self, 1, esi);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
L_10256cbd: ;
    g->ebx = self;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x10255b00u), self, edx, 0);
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return self;
L_10256ccd: ;
    if (ebp == 0u) goto L_10256d1c;
    if (ebp != eax) goto L_10256d1c;
    if (rd32(arg1 + 4u) != 0u)
    {
        eax = rd32(arg1 + 4u);
    }
    else
    {
        eax = COW_IMG(0x1033ce70u);
    }
    if (rd8(eax - 1u) >= 0xfeu) goto L_10256d1c;
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
    t15 = rd32(arg1 + 8u);
    wr32(self + 8u, t15);
    t16 = rd32(arg1 + 0xcu);
    wr32(self + 0xcu, t16);
    wr8(eax - 1u, (uint8_t)(rd8(eax - 1u) + 1u));
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return self;
L_10256d1c: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x10255260u), self, 2, ebp, 1u);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        edx = t18;
        if (rd32(arg1 + 4u) == 0u)
        {
            esi = COW_IMG(0x1033ce70u);
        }
        else
        {
            edi = rd32(arg1 + 4u);
            esi = edi;
        }
        t19 = rd32(self + 4u);
        edi = t19;
        ecx = ebp >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebp & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x102559c0u), self, 1, ebp);
    }
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10256c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10256c40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
