/* f_0x10225b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10225b90(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg1 != 0u)
    {
        edi = arg1 + 8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx != 1u)
        {
            edi = sp0 - 0x3fu;
            eax = 0u;
            ecx = 0xfu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            if (arg1 + 0x18u == 0u)
            {
                wr32(sp0 - 0x4cu, arg1 + 8u);
                wr32(sp0 - 0x50u, COW_IMG(0x10386248u));
                wr32(sp0 - 0x54u, sp0 - 0x40u);
                g->ecx = ecx;
                g->edx = sp0 - 0x40u;
                g->esp = sp0 - 0x40u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10386248u), arg1 + 8u, in_edi, in_esi);
                t3 = g->ecx;
                t4 = g->edx;
                ecx = t3;
                edx = t4;
            }
            else
            {
                wr32(sp0 - 0x4cu, arg1 + 0x18u);
                wr32(sp0 - 0x50u, arg1 + 8u);
                wr32(sp0 - 0x54u, COW_IMG(0x1038624cu));
                wr32(sp0 - 0x58u, sp0 - 0x40u);
                g->ecx = sp0 - 0x40u;
                g->edx = arg1;
                g->esp = sp0 - 0x44u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1038624cu), arg1 + 8u, arg1 + 0x18u, in_edi);
                t1 = g->ecx;
                t2 = g->edx;
                ecx = t1;
                edx = t2;
            }
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, sp0 - 0x40u);
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10225b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
