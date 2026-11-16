/* f_0x1010bc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1010bc10(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    if (rd32(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        if (rd32(sp0 + 4u) == 0u)
        {
            eax = in_eax;
            edx = in_edx;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            ebx = rd32(sp0 + 4u);
            wr32(sp0 - 0x50u, in_esi);
            wr32(sp0 - 0x54u, in_edi);
            eax = in_eax;
            edx = in_edx;
            esi = sp0 - 0x24u;
            edi = 3u;
L_1010bc38: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x54u;
            t1 = cow_thiscall(g, COW_IMG(0x1010c7b0u), esi, 0);
            t2 = g->edx;
            if (edi != 1u)
            {
                eax = t1;
                edx = t2;
                esi = esi + 0xcu;
                edi = edi - 1u;
                goto L_1010bc38;
            }
            edx = t2;
            edi = sp0 - 0x44u;
            eax = 0u;
            ecx = 8u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
L_1010bc52: ;
            t3 = rd8(COW_IMG(0x1036bf58u) + eax);
            wr8(eax + sp0 - 0x44u, (uint8_t)t3);
            if ((uint8_t)t3 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t3;
                goto L_1010bc52;
            }
            wr32(sp0 - 0x58u, 0x10u);
            wr32(sp0 - 0x5cu, 0u);
            t4 = rd32(ebx + 4u);
            wr32(sp0 - 0x34u, t4);
            g->eax = t4;
            g->esp = sp0 - 0x54u;
            t5 = cow_fastcall(g, COW_IMG(0x1010c7c0u), sp0 - 0x24u, edx, 2, 0u, 0x10u);
            t6 = g->edx;
            wr32(sp0 - 0x58u, 0x10u);
            wr32(sp0 - 0x5cu, 0u);
            t7 = cow_fastcall(g, COW_IMG(0x1010c7c0u), sp0 - 0x18u, t6, 2, 0u, 0x10u);
            t8 = g->edx;
            wr32(sp0 - 0x58u, 0x10u);
            wr32(sp0 - 0x5cu, 0u);
            cow_fastcall(g, COW_IMG(0x1010c7c0u), sp0 - 0xcu, t8, 2, 0u, 0x10u);
            if (rd32(sp0 - 0x1cu) != 0u)
            {
                if (rd32(sp0 - 0x10u) != 0u)
                {
                    if (rd32(sp0 - 4u) != 0u)
                    {
                        esi = rd32(ebx + 0x3cu);
L_1010bcaa: ;
                        if (rd32(esi + 4u) == 0u) goto L_1010bcdc;
                        if (rd32(esi + 8u) == 0u) goto L_1010bcdc;
                        wr32(sp0 - 0x58u, sp0 - 0xcu);
                        wr32(sp0 - 0x5cu, sp0 - 0x18u);
                        wr32(sp0 - 0x60u, sp0 - 0x24u);
                        wr32(sp0 - 0x64u, rd32(esi));
                        g->esp = sp0 - 0x54u;
                        cow_fastcall(g, COW_IMG(0x1010beb0u), self, sp0 - 0x18u, 4, rd32(esi), sp0 - 0x24u, sp0 - 0x18u, sp0 - 0xcu);
                        if (rd32(esi + 8u) != 0u)
                        {
                            eax = rd32(esi + 8u);
                            esi = eax;
                        }
                        goto L_1010bcaa;
                    }
                }
            }
L_1010bcdc: ;
            t9 = rd32(sp0 - 0x20u);
            wr32(rd32(sp0 - 0x1cu), t9);
            if (rd32(sp0 - 0x20u) == 0u)
            {
                eax = 0x20u;
            }
            else
            {
                ecx = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x30u, 0x20u);
                eax = ecx + 0x20u;
            }
            t10 = rd32(sp0 - 0x14u);
            wr32(rd32(sp0 - 0x10u), t10);
            if (rd32(sp0 - 0x14u) != 0u)
            {
                ecx = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x30u, eax);
                eax = eax + ecx;
            }
            t11 = rd32(sp0 - 8u);
            wr32(rd32(sp0 - 4u), t11);
            if (rd32(sp0 - 8u) == 0u)
            {
                ecx = rd32(sp0 - 8u);
            }
            else
            {
                ecx = rd32(sp0 - 8u);
                wr32(sp0 - 0x30u, eax);
            }
            wr32(sp0 - 0x58u, rd32(self));
            wr32(sp0 - 0x5cu, 1u);
            wr32(sp0 - 0x60u, 0x20u);
            wr32(sp0 - 0x64u, sp0 - 0x44u);
            g->eax = sp0 - 0x44u;
            t12 = rd32(self);
            g->esp = sp0 - 0x4cu;
            t13 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t12, 1, 6, sp0 - 0x44u, 0x20u, 1u, t12, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
            t14 = g->edx;
            wr32(sp0 + 4u, 3u);
            eax = t13;
            edx = t14;
            ebx = sp0 - 0x20u;
L_1010bd49: ;
            if (rd32(ebx) == 0u) goto L_1010bd6c;
            esi = rd32(ebx);
            edi = rd32(ebx + 4u);
L_1010bd52: ;
            wr32(sp0 - 0x58u, rd32(self));
            wr32(sp0 - 0x5cu, esi);
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, edi);
            g->eax = eax;
            g->esp = sp0 - 0x4cu;
            t15 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, edi, 1u, esi, rd32(self), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
            t16 = g->edx;
            if (t15 == 0u)
            {
                edx = t16;
                goto L_1010bd6c;
            }
            eax = t15;
            edx = t16;
            if (esi != eax)
            {
                esi = esi - eax;
                edi = eax + edi;
                goto L_1010bd52;
            }
L_1010bd6c: ;
            t17 = rd32(sp0 + 4u) - 1u;
            t18 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t17);
            if (t18 != 1u)
            {
                eax = t17;
                ebx = ebx + 0xcu;
                goto L_1010bd49;
            }
            eax = t17;
            esi = sp0;
            edi = 3u;
L_1010bd83: ;
            g->eax = eax;
            g->esp = sp0 - 0x54u;
            t19 = cow_fastcall(g, COW_IMG(0x1010c790u), esi - 0xcu, edx, 0);
            t20 = g->edx;
            if (edi != 1u)
            {
                eax = t19;
                edx = t20;
                esi = esi - 0xcu;
                edi = edi - 1u;
                goto L_1010bd83;
            }
            eax = t19;
            edx = t20;
            esi = rd32(sp0 - 0x50u);
            edi = rd32(sp0 - 0x54u);
        }
    }
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010bc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010bc10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
