/* f_0x1018de60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018de60(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(self + 4u) <= 0)
    {
        ecx = self;
        loc_4 = 0u;
    }
    else
    {
        edi = rd32(self + 4u);
        edx = in_edx;
        ebx = 0u;
        loc_4 = 0u;
        loc_8 = self + 0x1cu;
L_1018de81: ;
        eax = loc_8 - 0x14u;
        ecx = loc_8;
        esi = arg1;
L_1018de8c: ;
        if (rd8(eax) != rd8(esi))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = (edx & 0xffffff00u) | rd8(eax);
            cf = rd8(eax) < rd8(esi);
            goto L_1018deb0;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx == 0u) goto L_1018deac;
        if (rd8(eax + 1u) != rd8(esi + 1u))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            cf = rd8(eax + 1u) < rd8(esi + 1u);
            goto L_1018deb0;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        if ((uint8_t)ecx != 0u)
        {
            eax = eax + 2u;
            esi = esi + 2u;
            goto L_1018de8c;
        }
L_1018deac: ;
        eax = 0u;
L_1018deb5: ;
        if (eax == 0u)
        {
            if ((int32_t)ebx >= (int32_t)(edi - 1u))
            {
                esi = ebx;
            }
            else
            {
                esi = ebx;
                edi = loc_8;
L_1018decc: ;
                eax = edi;
L_1018ded3: ;
                t1 = rd8(eax);
                wr8(eax - 0x14u, (uint8_t)t1);
                if ((uint8_t)t1 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t1;
                    goto L_1018ded3;
                }
                ecx = (ecx & 0xffffff00u) | t1;
                if ((int32_t)(esi + 1u) < (int32_t)(rd32(self + 4u) - 1u))
                {
                    esi = esi + 1u;
                    edi = edi + 0x14u;
                    goto L_1018decc;
                }
                edx = 0xffffffecu;
                esi = esi + 1u;
            }
            wr8(esi * 0x14u + self + 8u, 0u);
            wr32(esi * 0x14u + self + 0x18u, 0u);
            loc_4 = 1u;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 4u))
        {
            ebx = ebx + 1u;
            edi = rd32(self + 4u);
            loc_8 = loc_8 + 0x14u;
            goto L_1018de81;
        }
        ecx = loc_8 + 0x14u;
    }
    edx = 0u;
    esi = self + 8u;
L_1018df17: ;
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_1018df2e;
    ecx = ~ecx - 1u;
    if ((int32_t)(edx + 1u) < 64)
    {
        edx = edx + 1u;
        esi = esi + 0x14u;
        goto L_1018df17;
    }
    edx = edx + 1u;
L_1018df2e: ;
    wr32(self + 4u, edx);
    return loc_4;
L_1018deb0: ;
    eax = -cf + 1u - cf;
    goto L_1018deb5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018de60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018de60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
