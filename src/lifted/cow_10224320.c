/* f_0x10224320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10224320(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0x30u) < 0) goto L_10224338;
    eax = rd32(self + 0x30u);
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_10224338;
    ecx = eax * 8u + rd32(self + 0x20u);
L_1022433a: ;
    if ((int32_t)rd32(self + 0x6cu) < 0) goto L_1022434e;
    eax = rd32(self + 0x6cu);
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_1022434e;
    eax = eax * 8u + rd32(self + 0x20u);
L_10224350: ;
    if (ecx == 0u)
    {
        loc_4 = self;
    }
    else
    {
        if (eax == 0u)
        {
            loc_4 = self;
        }
        else
        {
            if (rd32(eax) >= rd32(ecx))
            {
                edx = rd32(ecx);
                ebx = rd32(COW_IMG(0x10667150u));
                edi = rd32(eax) * 2u + rd32(COW_IMG(0x10667150u)) + 0x160u;
                cf = rd32(eax) < rd32(ecx);
                zf = rd32(eax) == rd32(ecx);
                ecx = (ecx & 0xffff0000u) | rd16(rd32(eax) * 2u + rd32(COW_IMG(0x10667150u)) + 0x160u);
                loc_4 = (self & 0xffff0000u) | rd16(rd32(eax) * 2u + rd32(COW_IMG(0x10667150u)) + 0x160u);
                eax = rd32(eax);
                if (!(cf || zf))
                {
                    eax = eax - edx;
L_10224392: ;
                    t1 = rd16(edi - 2u);
                    wr16(edi, (uint16_t)t1);
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        ecx = (ecx & 0xffff0000u) | t1;
                        edi = edi - 2u;
                        goto L_10224392;
                    }
                    eax = eax - 1u;
                }
            }
            else
            {
                edx = rd32(ecx);
                ebx = rd32(COW_IMG(0x10667150u));
                edi = rd32(eax) * 2u + rd32(COW_IMG(0x10667150u)) + 0x160u;
                loc_4 = (self & 0xffff0000u) | rd16(rd32(eax) * 2u + rd32(COW_IMG(0x10667150u)) + 0x160u);
                eax = rd32(eax);
                esi = eax * 2u + ebx + 0x162u;
                ecx = edx - eax;
                while (ecx) { wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u); ecx--; }
            }
            wr16(ebx + edx * 2u + 0x160u, (uint16_t)loc_4);
            t2 = rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u);
            t3 = rd32(self + 0x64u);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x102240b0u), self, 2, t3, t2);
        }
    }
    return;
L_10224338: ;
    ecx = 0u;
    goto L_1022433a;
L_1022434e: ;
    eax = 0u;
    goto L_10224350;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10224320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
