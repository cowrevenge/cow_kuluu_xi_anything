/* f_0x102e7670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e7670(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        if (rd32(COW_IMG(0x103ccc54u)) != 0xffffu)
        {
            ebx = in_ebx;
        }
        else
        {
            wr32(COW_IMG(0x103ccc54u), 0u);
            wr32(sp0 - 0x10u, in_ebx);
            wr32(sp0 - 0x14u, 0x39u);
            wr32(sp0 - 0x14u, COW_IMG(0x103cc410u));
            esi = COW_IMG(0x103cc4f8u);
            edi = COW_IMG(0x103cc410u);
            ecx = 0x39u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->ecx = ecx;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x102f478cu), 1, COW_IMG(0x103cc410u));
            t1 = g->ecx;
            t2 = g->edx;
            wr32(sp0 - 0x18u, 4u);
            wr32(sp0 - 0x1cu, sp0 + 4u);
            wr32(sp0 - 0x20u, COW_IMG(0x10346458u));
            wr32(sp0 - 0x24u, 4u);
            g->esp = sp0 - 0x14u;
            t3 = cow_call_regs(g, COW_IMG(0x102e73c5u), g->eax, t1, t2, 1, 4, 4u, COW_IMG(0x10346458u), sp0 + 4u, 4u);
            t4 = g->ecx;
            t5 = g->edx;
            if (t3 != 0u)
            {
                ecx = t4;
                edx = t5;
            }
            else
            {
                eax = t3;
                ecx = t4;
                edx = t5;
                wr32(sp0 + 4u, rd32(sp0 + 4u) & eax);
            }
            if (rd32(sp0 + 4u) != 1u)
            {
                wr32(sp0 - 0x14u, 7u);
                g->ebx = COW_IMG(0x103cc410u);
                g->esi = 1u;
                g->esp = sp0 - 0x10u;
                t6 = cow_call_regs(g, COW_IMG(0x102e75bcu), g->eax, g->ecx, edx, 1, 1, 7u);
                t7 = g->edx;
                if (t6 == 0u)
                {
                    edx = t7;
                    goto L_102e7706;
                }
                eax = t6;
                edx = t7;
                wr32(sp0 - 0x14u, COW_IMG(0x103cc410u));
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x102f40c5u), 1, COW_IMG(0x103cc410u));
                wr32(COW_IMG(0x103ccc54u), 1u);
L_102e7740: ;
            }
L_102e7741: ;
            ebx = rd32(sp0 - 0x10u);
        }
    }
    else
    {
        wr32(sp0 - 0x10u, 0x39u);
        wr32(COW_IMG(0x103ccc54u), 0xffffu);
        esi = COW_IMG(0x103cc4f8u);
        edi = COW_IMG(0x103cc410u);
        ecx = 0x39u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ebx = in_ebx;
    }
    g->ebx = ebx;
    g->esi = in_esi;
    return rd32(COW_IMG(0x103ccc54u));
L_102e7706: ;
    wr32(sp0 - 0x14u, 0xau);
    g->ebx = COW_IMG(0x103cc410u);
    g->esi = 1u;
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x102e75bcu), g->eax, g->ecx, edx, 1, 1, 0xau);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        goto L_102e7724;
    }
    eax = t8;
    edx = t9;
    wr32(sp0 - 0x14u, COW_IMG(0x103cc410u));
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102f3ee0u), 1, COW_IMG(0x103cc410u));
    wr32(COW_IMG(0x103ccc54u), 2u);
    goto L_102e7740;
L_102e7724: ;
    wr32(sp0 - 0x14u, 6u);
    g->ebx = COW_IMG(0x103cc410u);
    g->esi = 1u;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x102e75bcu), g->eax, g->ecx, edx, 1, 1, 6u);
    t11 = g->edx;
    if (t10 == 0u) goto L_102e7741;
    eax = t10;
    edx = t11;
    wr32(sp0 - 0x14u, COW_IMG(0x103cc410u));
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102f3dd0u), 1, COW_IMG(0x103cc410u));
    wr32(COW_IMG(0x103ccc54u), 3u);
    goto L_102e7740;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e7670(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
