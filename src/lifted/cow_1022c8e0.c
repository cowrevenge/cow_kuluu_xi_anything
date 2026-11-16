/* f_0x1022c8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022c8e0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;

    if ((int32_t)rd32(self + 0x30u) < 0)
    {
        edx = rd32(self + 0x70u);
        goto L_1022c8fb;
    }
    eax = rd32(self + 0x30u);
    edx = rd32(self + 0x70u);
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_1022c8fb;
    ecx = eax * 8u + rd32(self + 0x20u);
L_1022c8fd: ;
    if ((int32_t)edx < 0) goto L_1022c90e;
    if ((int32_t)edx >= (int32_t)rd32(self + 0x44u)) goto L_1022c90e;
    eax = edx * 8u + rd32(self + 0x20u);
L_1022c910: ;
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
            t1 = rd16(rd32(eax) * 2u + rd32(COW_IMG(0x10667a7cu)) + 0x80u);
            if (rd32(eax) >= rd32(ecx))
            {
                edx = rd32(ecx);
                ebx = rd32(COW_IMG(0x10667a7cu));
                edi = rd32(eax) * 2u + rd32(COW_IMG(0x10667a7cu)) + 0x80u;
                cf = rd32(eax) < rd32(ecx);
                zf = rd32(eax) == rd32(ecx);
                eax = rd32(eax);
                ecx = t1;
                loc_4 = t1;
                if (!(cf || zf))
                {
                    eax = eax - edx;
                    esi = in_esi;
L_1022c951: ;
                    t2 = rd16(edi - 2u);
                    wr16(edi, (uint16_t)t2);
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        esi = (esi & 0xffff0000u) | t2;
                        edi = edi - 2u;
                        goto L_1022c951;
                    }
                }
            }
            else
            {
                edx = rd32(ecx);
                ebx = rd32(COW_IMG(0x10667a7cu));
                edi = rd32(eax) * 2u + rd32(COW_IMG(0x10667a7cu)) + 0x80u;
                eax = rd32(eax);
                loc_4 = t1;
                esi = eax * 2u + ebx + 0x82u;
                ecx = edx - eax;
                while (ecx) { wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u); ecx--; }
                ecx = loc_4;
            }
            wr16(ebx + edx * 2u + 0x80u, (uint16_t)ecx);
            t3 = rd32(rd32(COW_IMG(0x10667a7cu)) + 0x880u);
            t4 = rd32(self + 0x68u);
            t5 = rd32(self + 0x64u);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1022c690u), self, 3, t5, t4, t3);
        }
    }
    return;
L_1022c8fb: ;
    ecx = 0u;
    goto L_1022c8fd;
L_1022c90e: ;
    eax = 0u;
    goto L_1022c910;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022c8e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
