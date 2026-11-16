/* f_0x10317270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10317270(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_103172bc;
    }
    if (((arg1 | arg2) & 3u) == 0u) goto L_103172bd;
    if (!(arg3 & 1u))
    {
        eax = arg3;
        ecx = self;
        edx = (arg1 | arg2) & 3u;
        esi = arg1;
        edi = arg2;
        goto L_1031729d;
    }
    if (rd8(arg1) != rd8(arg2))
    {
        eax = arg3;
        edx = (arg1 | arg2) & 3u;
        cf = rd8(arg1) < rd8(arg2);
        goto L_103172ea;
    }
    ecx = (self & 0xffffff00u) | rd8(arg1);
    if (arg3 == 1u)
    {
        eax = arg3 - 1u;
        edx = (arg1 | arg2) & 3u;
        goto L_103172ba;
    }
    eax = arg3 - 1u;
    edx = (arg1 | arg2) & 3u;
    esi = arg1 + 1u;
    edi = arg2 + 1u;
L_1031729d: ;
    if (rd8(esi) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(edi);
        cf = rd8(esi) < rd8(edi);
        goto L_103172ea;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    edx = (edx & 0xffffff00u) | rd8(edi);
    if (rd8(esi + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(edi + 1u);
        cf = rd8(esi + 1u) < rd8(edi + 1u);
        goto L_103172ea;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    edx = (edx & 0xffffff00u) | rd8(edi + 1u);
    if (eax != 2u)
    {
        eax = eax - 2u;
        esi = esi + 2u;
        edi = edi + 2u;
        goto L_1031729d;
    }
    eax = eax - 2u;
L_103172ba: ;
L_103172bc: ;
    g->edx = edx;
    return eax;
L_103172bd: ;
    if (arg3 >> 2u == 0u)
    {
        esi = arg1;
        edi = arg2;
        goto L_103172f2;
    }
    esi = arg1;
    edi = arg2;
    ecx = arg3 >> 2u;
    cf = arg3 >> 1u & 1u;
    pf = PARITY((uint8_t)(arg3 >> 2u));
    af = 0u;
    zf = arg3 >> 2u == 0u;
    sf = (int32_t)(arg3 >> 2u) < 0;
    of = arg3 >> 0x1fu;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_103172f2;
    if ((uint8_t)rd32(esi - 4u) != (uint8_t)rd32(edi - 4u))
    {
        edx = rd32(edi - 4u);
        cf = (uint8_t)rd32(esi - 4u) < (uint8_t)rd32(edi - 4u);
    }
    else
    {
        ecx = rd32(esi - 4u);
        edx = rd32(edi - 4u);
        if ((uint8_t)(ecx >> 8u) != (uint8_t)(edx >> 8u))
        {
            cf = (uint8_t)(ecx >> 8u) < (uint8_t)(edx >> 8u);
        }
        else
        {
            if ((uint8_t)(ecx >> 0x10u) != (uint8_t)(edx >> 0x10u))
            {
                cf = (uint8_t)(ecx >> 0x10u) < (uint8_t)(edx >> 0x10u);
                edx = edx >> 0x10u;
            }
            else
            {
                ecx = ecx >> 0x10u;
                edx = edx >> 0x10u;
                cf = (uint8_t)(ecx >> 8u) < (uint8_t)(edx >> 8u);
            }
        }
    }
L_103172e5: ;
    eax = 0u;
L_103172ea: ;
    g->edx = edx;
    return -cf + 1u - cf;
L_103172f2: ;
    if ((arg3 & 3u) == 0u)
    {
        eax = arg3 & 3u;
        edx = (arg1 | arg2) & 3u;
        goto L_103172ba;
    }
    if ((uint8_t)rd32(esi) != (uint8_t)rd32(edi))
    {
        edx = rd32(esi);
        cf = (uint8_t)rd32(esi) < (uint8_t)rd32(edi);
        goto L_103172e5;
    }
    ecx = rd32(edi);
    edx = rd32(esi);
    if ((arg3 & 3u) == 1u)
    {
        eax = (arg3 & 3u) - 1u;
        goto L_10317319;
    }
    if ((uint8_t)(edx >> 8u) != (uint8_t)(ecx >> 8u))
    {
        cf = (uint8_t)(edx >> 8u) < (uint8_t)(ecx >> 8u);
        goto L_103172e5;
    }
    if ((arg3 & 3u) == 2u)
    {
        eax = (arg3 & 3u) - 2u;
        goto L_10317319;
    }
    if ((edx & 0xff0000u) != (ecx & 0xff0000u))
    {
        cf = (edx & 0xff0000u) < (ecx & 0xff0000u);
        edx = edx & 0xff0000u;
        goto L_103172e5;
    }
    edx = edx & 0xff0000u;
    eax = (arg3 & 3u) - 3u;
L_10317319: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
