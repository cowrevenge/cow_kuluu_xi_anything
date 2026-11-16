/* f_0x102559e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102559e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) >= arg1)
    {
        eax = rd32(self + 8u);
        ecx = arg1;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        g->ebp = self;
        g->eax = eax;
        g->ecx = arg1;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_stdcall(g, COW_IMG(0x1032708cu), 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (rd32(self + 4u) != 0u)
    {
        esi = rd32(self + 4u);
        if (rd8(esi - 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi - 1u);
            if ((uint8_t)eax != 0xffu)
            {
                wr8(esi - 1u, (uint8_t)((uint8_t)eax - 1u));
                wr32(self + 4u, 0u);
                wr32(self + 8u, 0u);
                wr32(self + 0xcu, 0u);
                edi = esi;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0xffu);
                af = 0u;
                zf = 0u;
                sf = 1u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                t4 = ~ecx - 1u;
                g->esp = sp0 - 0x10u;
                t5 = cow_thiscall(g, COW_IMG(0x10255260u), self, 2, t4, 1u);
                if ((uint8_t)t5 != 0u)
                {
                    eax = t5;
                    ebx = t4;
                    t6 = rd32(self + 4u);
                    edi = t6;
                    ecx = ebx >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = ebx & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    g->esp = sp0 - 0x10u;
                    cow_thiscall(g, COW_IMG(0x102559c0u), self, 1, ebx);
                }
            }
        }
    }
    if (rd32(self + 8u) - arg1 >= arg2)
    {
        eax = rd32(self + 8u) - arg1;
        edi = arg2;
    }
    else
    {
        eax = rd32(self + 8u) - arg1;
        edi = eax;
    }
    if (edi == 0u) goto L_10255af1;
    t7 = arg1 + edi + rd32(self + 4u);
    t8 = arg1 + rd32(self + 4u);
    g->ecx = t8;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t8, t7, eax - edi, in_edi, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd32(self + 8u) - edi <= 0xfffffffdu)
    {
        ecx = t10;
        edx = t11;
        esi = rd32(self + 8u) - edi;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = rd32(self + 8u) - edi;
        g->ebp = self;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10326e60u), 0);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10255ac3;
    }
    eax = rd32(self + 4u);
    if (rd8(eax - 1u) == 0u) goto L_10255ac3;
    ecx = (ecx & 0xffffff00u) | rd8(eax - 1u);
    if ((uint8_t)ecx == 0xffu) goto L_10255ac3;
    if (esi != 0u) goto L_10255adf;
    wr8(eax - 1u, (uint8_t)((uint8_t)ecx - 1u));
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10255380u), eax, self, g->edx, 0, 1, 0u);
    g->ebp = in_ebp;
    return self;
L_10255ac3: ;
    if (esi != 0u) goto L_10255ada;
    if (eax == 0u) goto L_10255af1;
    wr32(self + 8u, 0u);
    wr8(eax, 0u);
    g->ebp = in_ebp;
    return self;
L_10255ada: ;
    if (rd32(self + 0xcu) >= esi) goto L_10255ae7;
L_10255adf: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x102554b0u), self, 1, esi);
L_10255ae7: ;
    t14 = rd32(self + 4u);
    wr32(self + 8u, esi);
    wr8(esi + t14, 0u);
L_10255af1: ;
    g->ebp = in_ebp;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102559e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102559e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
