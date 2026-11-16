/* f_0x101c0760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101c0760(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 840u);

    wr32(sp0 - 0x328u, in_ebx);
    wr32(sp0 - 0x32cu, in_ebp);
    wr32(sp0 - 0x330u, in_esi);
    wr32(sp0 - 0x334u, in_edi);
    wr32(sp0 - 0x324u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x320u, 0u);
    edi = sp0 - 0x31cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x204u, 0u);
    if (rd8(self + 0x4f4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x4f4u);
        wr32(sp0 - 0x338u, arg1);
        wr32(sp0 - 0x33cu, self + 0x4f4u);
        wr32(sp0 - 0x340u, COW_IMG(0x1037cba0u));
        wr32(sp0 - 0x344u, sp0 - 0x200u);
        g->ecx = ecx;
        g->esp = sp0 - 0x330u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x1037cba0u), self + 0x4f4u, arg1, in_edi);
        t1 = g->ecx;
        edi = sp0 - 0x200u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0x334u < sp0 - 0x344u;
        pf = PARITY((uint8_t)(sp0 - 0x334u));
        af = (sp0 - 0x344u ^ 0x10u ^ sp0 - 0x334u) >> 4u & 1u;
        zf = sp0 == 0x334u;
        sf = (int32_t)(sp0 - 0x334u) < 0;
        of = ((sp0 - 0x344u ^ sp0 - 0x334u) & (sp0 - 0x334u ^ 0x10u)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if ((int32_t)(~ecx - 1u) > 0)
        {
            ecx = ~ecx - 1u;
            eax = (eax & 0xffffff00u) | 0x2fu;
L_101c07fd: ;
            if (rd8(ecx + sp0 - 0x200u) == (uint8_t)eax) goto L_101c080d;
            if ((int32_t)(ecx - 1u) > 0)
            {
                ecx = ecx - 1u;
                goto L_101c07fd;
            }
        }
L_101c0814: ;
        wr32(sp0 - 0x338u, sp0 - 0x200u);
        wr32(sp0 - 0x33cu, 0x100u);
        wr32(sp0 - 0x340u, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x334u;
        t2 = cow_thiscall(g, COW_IMG(0x101c3f40u), self, 3, sp0 - 0x100u, 0x100u, sp0 - 0x200u);
        t3 = g->edx;
        if ((int32_t)t2 <= 0)
        {
            edx = t3;
        }
        else
        {
            edx = t3;
            wr32(sp0 - 0x338u, sp0 - 0x100u);
            g->esp = sp0 - 0x334u;
            cow_fastcall(g, COW_IMG(0x101c3fe0u), self, edx, 1, sp0 - 0x100u);
            t4 = g->edx;
            edx = t4;
        }
    }
    wr32(sp0 - 0x338u, sp0 - 0x31cu);
    wr32(sp0 - 0x33cu, arg1);
    g->esp = sp0 - 0x334u;
    t5 = cow_thiscall(g, COW_IMG(0x101c3e10u), self, 2, arg1, sp0 - 0x31cu);
    if ((int32_t)t5 >= 0) goto L_101c0864;
    eax = t5;
    g->ebx = rd32(sp0 - 0x328u);
    g->esi = rd32(sp0 - 0x330u);
    g->edi = rd32(sp0 - 0x334u);
    g->ebp = rd32(sp0 - 0x32cu);
    return 0xffffffffu;
L_101c080d: ;
    wr8(ecx + sp0 - 0x200u, 0u);
    goto L_101c0814;
L_101c0864: ;
    wr32(sp0 - 0x338u, arg4);
    wr32(sp0 - 0x320u, 3u);
    wr32(sp0 - 0x218u, arg2);
    wr32(sp0 - 0x214u, arg3);
    g->esp = sp0 - 0x334u;
    t6 = cow_stdcall(g, COW_IMG(0x101c3fb0u), 1, arg4);
    wr32(sp0 - 0x338u, sp0 - 0x324u);
    wr32(sp0 - 0x210u, t6);
    t7 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), sp0 - 0x324u, 1, sp0 - 0x324u);
    g->ebx = rd32(sp0 - 0x328u);
    g->esi = rd32(sp0 - 0x330u);
    g->edi = rd32(sp0 - 0x334u);
    g->ebp = rd32(sp0 - 0x32cu);
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c0760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c0760(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
