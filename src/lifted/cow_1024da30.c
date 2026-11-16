/* f_0x1024da30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024da30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0x40u);
    t1 = rd32(sp0 + 4u) + 0xccu;
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10252a20u), in_eax, g->ecx, g->edx, 1, 3, t1, 0x40u, in_edi);
    t3 = g->edx;
    wr32(sp0 - 0x20u, 3u);
    t4 = rd32(t2 + 0xb0u);
    wr32(sp0 - 0x24u, t4);
    t5 = rd32(t2 + 0xd4u);
    wr32(sp0 - 0x28u, t5);
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102700e0u), 3, t5, t4, 3u);
    t6 = g->edx;
    if ((int32_t)rd32(rd32(t1 + 0x20u) + 0x34u) <= 0)
    {
        edx = t6;
        esi = t2;
        edi = t1;
        goto L_1024dade;
    }
    eax = rd32(t1 + 0x20u);
    ebp = 0u;
    esi = t2;
    edi = t1;
L_1024da6f: ;
    if (rd32(rd32(ebp * 4u + rd32(eax + 0x2cu))) != 0xf0001u)
    {
        ecx = rd32(rd32(ebp * 4u + rd32(eax + 0x2cu)));
        edx = rd32(eax + 0x2cu);
        ebx = rd32(ebp * 4u + rd32(eax + 0x2cu));
        if (ecx == 0xf0005u)
        {
            wr32(sp0 - 0x18u, 3u);
            wr32(sp0 - 0x1cu, ebx);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10277910u), 4, ebx, 3u, in_edi, in_esi);
            t12 = g->ecx;
            t13 = g->edx;
            if (rd32(esi + 8u) == 6u)
            {
                eax = rd32(esi + 8u);
                ecx = t12;
                edx = t13;
                goto L_1024db68;
            }
            eax = rd32(esi + 8u);
            ecx = t12;
            edx = t13;
            if (eax != 7u) goto L_1024db55;
            if (rd32(esi + 0xcu) == 5u)
            {
                ecx = rd32(esi + 0xcu);
                goto L_1024db68;
            }
            ecx = rd32(esi + 0xcu);
            if (ecx == eax) goto L_1024db68;
L_1024db55: ;
            if (eax != 2u) goto L_1024dad5;
            if (rd32(esi + 0xcu) != 6u) goto L_1024dad5;
L_1024db68: ;
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102778e0u), 2, ebx, 0u);
            t14 = g->edx;
            edx = t14;
        }
    }
    else
    {
        edx = rd32(eax + 0x2cu);
        ebx = rd32(ebp * 4u + rd32(eax + 0x2cu));
        if (rd32(esi + 8u) == 0u)
        {
            ecx = rd32(esi + 8u);
            if (rd32(esi + 0xcu) == 7u)
            {
                wr32(sp0 - 0x18u, ebp);
                wr32(sp0 - 0x1cu, 1u);
                wr32(sp0 - 0x20u, eax);
                g->ecx = ecx;
                g->esp = sp0 - 0x14u;
                t7 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, eax, 1u, ebp);
                t8 = g->ecx;
                edi = t7;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = sp0 - 0x14u < sp0 - 0x20u;
                pf = PARITY((uint8_t)(sp0 - 0x14u));
                af = (sp0 - 0x20u ^ sp0 - 0x14u) >> 4u & 1u;
                zf = sp0 == 0x14u;
                sf = (int32_t)(sp0 - 0x14u) < 0;
                of = ((sp0 - 0x20u ^ sp0 - 0x14u) & (sp0 - 0x14u ^ 0xcu)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                if (~ecx - 1u < 7u)
                {
                    edx = t7;
                }
                else
                {
                    ecx = ~ecx - 1u;
                    edx = t7;
                    wr32(sp0 - 0x18u, 7u);
                    wr32(sp0 - 0x1cu, COW_IMG(0x103896d4u));
                    wr32(sp0 - 0x20u, edx);
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t9 = cow_cdecl(g, COW_IMG(0x10312980u), 5, edx, COW_IMG(0x103896d4u), 7u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                    t10 = g->edx;
                    if (t9 != 0u)
                    {
                        edx = t10;
                    }
                    else
                    {
                        edx = t10;
                        t11 = (rd32(ebx + 0x84u) & 0xffffff00u) | (uint8_t)(rd32(ebx + 0x84u) | 4u);
                        wr32(ebx + 0x84u, t11);
                    }
                }
                edi = rd32(sp0 + 4u);
            }
        }
    }
L_1024dad5: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(rd32(edi + 0x20u) + 0x34u))
    {
        eax = rd32(edi + 0x20u);
        ebp = ebp + 1u;
        goto L_1024da6f;
    }
L_1024dade: ;
    if ((int32_t)rd32(edi + 8u) >= 0)
    {
        ebx = 4u;
        esi = esi + 0x1d8u;
L_1024daf0: ;
        if (rd32(esi + 0x10u) != 0u)
        {
            wr32(sp0 - 0x18u, sp0 - 4u);
            wr32(sp0 - 0x1cu, esi - 0x78u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10251390u), sp0 - 4u, g->ecx, g->edx, 1, 6, esi - 0x78u, sp0 - 4u, in_edi, in_esi, in_ebp, in_ebx);
            wr32(sp0 - 0x20u, self);
            wr32(sp0 - 0x24u, 0xffffffffu);
            wr32(sp0 - 0x28u, esi - 8u);
            t15 = rd32(edi + 8u);
            wr32(esi, t15);
            g->edx = t15;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10251090u), 3, esi - 8u, 0xffffffffu, self);
            t16 = g->edx;
            edx = t16;
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 0x1cu;
            goto L_1024daf0;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024da30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024da30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
