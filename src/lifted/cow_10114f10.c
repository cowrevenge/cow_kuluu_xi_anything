/* f_0x10114f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10114f10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    if (arg1 == 0u)
    {
        edx = in_edx;
        edi = in_edi;
    }
    else
    {
        if (rd32(COW_IMG(0x104e1708u)) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 0x1cu;
            t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(sp0 - 0x20u, t1);
            wr32(sp0 - 0x24u, arg1);
            g->esi = arg1;
            g->ecx = t2;
            g->edx = t3;
            cow_cdecl(g, COW_IMG(0x1010feb0u), 2, arg1, t1);
            t4 = g->ecx;
            t5 = g->edx;
            ecx = t4;
            edx = t5;
        }
        if (rd32(COW_IMG(0x104e1b6cu)) == 0u)
        {
            edi = in_edi;
        }
        else
        {
            wr32(sp0 - 0x20u, in_edi);
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 0x10u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t6 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(sp0 - 0x10u, t6);
            if (arg2 == 0u)
            {
                eax = t6;
                edx = t8;
                ebx = 0u;
            }
            else
            {
                eax = t6;
                ecx = t7;
                edx = t8;
                if (arg3 == 0u)
                {
                    ebx = 0u;
                }
                else
                {
                    wr32(sp0 - 0x24u, 8u);
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t9 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 8u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
                    t10 = g->ecx;
                    t11 = g->edx;
                    wr32(sp0 - 8u, t9);
                    if (t9 == 0u)
                    {
                        eax = t9;
                        edx = t11;
                        ebx = t9;
                    }
                    else
                    {
                        ecx = t10;
                        edx = t11;
                        ebx = t9;
                        if (arg3 < 0x40u)
                        {
                            edi = arg3;
                        }
                        else
                        {
                            edi = 0x40u;
                        }
                        t12 = (edi + 3u & 0xffffff00u) | (edi + 3u & 0xfcu);
                        wr32(sp0 - 0x24u, t12);
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t13 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t12, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
                        t14 = g->ecx;
                        t15 = g->edx;
                        wr32(ebx + 4u, t13);
                        if (t13 == 0u)
                        {
                            eax = t13;
                            ecx = t14;
                            edx = t15;
                            wr32(sp0 - 0x24u, ebx);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t16 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
                            t17 = g->edx;
                            wr32(sp0 - 8u, 0u);
                            eax = t16;
                            edx = t17;
                            ebx = 0u;
                        }
                        else
                        {
                            eax = t13;
                            ebp = edi + 3u;
                            esi = arg2;
                            edi = eax;
                            ecx = edi >> 2u;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            ecx = edi & 3u;
                            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                            eax = (ebp >> 2u & 0xffffff00u) | (ebp >> 2u & 0x1fu);
                            edx = edi;
                        }
                    }
                }
            }
            wr32(sp0 - 0x24u, sp0 - 0x10u);
            t18 = rd32(COW_IMG(0x104e1b6cu));
            g->esp = sp0 - 0x20u;
            cow_fastcall(g, COW_IMG(0x10114250u), t18, edx, 1, sp0 - 0x10u);
            t19 = g->ecx;
            t20 = g->edx;
            if (ebx == 0u)
            {
                edx = t20;
                edi = rd32(sp0 - 0x20u);
            }
            else
            {
                ecx = t19;
                edi = rd32(sp0 - 0x20u);
                t21 = rd32(ebx) - 1u;
                t22 = rd32(ebx);
                wr32(ebx, t21);
                if (t22 >= 2u)
                {
                    edx = t21;
                }
                else
                {
                    edx = t21;
                    if (rd32(ebx + 4u) == 0u)
                    {
                        eax = rd32(ebx + 4u);
                    }
                    else
                    {
                        eax = rd32(ebx + 4u);
                        wr32(sp0 - 0x20u, eax);
                        g->eax = eax;
                        g->esp = sp0 - 0x14u;
                        t23 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                        t24 = g->ecx;
                        t25 = g->edx;
                        eax = t23;
                        ecx = t24;
                        edx = t25;
                    }
                    wr32(sp0 - 0x20u, ebx);
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
                    t26 = g->edx;
                    edx = t26;
                }
            }
        }
    }
    g->esi = in_esi;
    g->edi = edi;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114f10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
