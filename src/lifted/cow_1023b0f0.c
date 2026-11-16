/* f_0x1023b0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1023b0f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = 0u;
        loc_4 = self;
    }
    else
    {
        edi = arg2;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t1 = ~ecx - 1u;
        if ((int32_t)(~ecx - 1u) <= 0)
        {
            edi = rd32(sp0 + 0xcu);
            loc_4 = t1;
        }
        else
        {
            edi = rd32(sp0 + 0xcu);
            loc_4 = t1;
            ebx = 0u;
L_1023b129: ;
            t2 = rd8(arg2 + ebx);
            wr8(sp0 + 0xcu, (uint8_t)t2);
            if ((uint8_t)t2 < 0x30u)
            {
                eax = (eax & 0xffffff00u) | t2;
                ecx = arg2 + ebx;
                goto L_1023b14c;
            }
            eax = (eax & 0xffffff00u) | t2;
            ecx = arg2 + ebx;
            if ((uint8_t)eax > 0x39u) goto L_1023b14c;
            eax = (uint8_t)rd32(sp0 + 0xcu) - 0x24u;
L_1023b1cd: ;
            t4 = rd32(eax * 4u + rd32(arg1));
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), t4, 5, edi, arg4, 0x80808080u, 0u, 0u);
            edi = edi + (uint32_t)(int16_t)rd16(t4 + 0x22u) - (uint32_t)(int16_t)rd16(t4 + 0x20u);
L_1023b1f9: ;
            if ((int32_t)(ebx + 1u) < (int32_t)loc_4)
            {
                eax = loc_4;
                ebx = ebx + 1u;
                goto L_1023b125;
            }
        }
        eax = edi;
    }
    return eax;
L_1023b125: ;
    goto L_1023b129;
L_1023b14c: ;
    if ((uint8_t)eax < 0x41u) goto L_1023b162;
    if ((uint8_t)eax > 0x5au) goto L_1023b162;
    eax = (uint8_t)rd32(sp0 + 0xcu) - 0x2bu;
    goto L_1023b1cd;
L_1023b162: ;
    if ((uint8_t)eax < 0x61u) goto L_1023b178;
    if ((uint8_t)eax > 0x7au) goto L_1023b178;
    eax = (uint8_t)rd32(sp0 + 0xcu) - 0x31u;
    goto L_1023b1cd;
L_1023b178: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x1011c920u), 1, ecx);
    if ((uint8_t)t3 == 0u) goto L_1023b1f6;
    if (rd8(arg2 + ebx + 1u) != 0xbeu)
    {
        eax = (arg2 & 0xffffff00u) | rd8(arg2 + ebx + 1u);
        ebx = ebx + 1u;
        goto L_1023b198;
    }
    ebx = ebx + 1u;
    eax = 0xa0u;
    goto L_1023b1cd;
L_1023b198: ;
    if ((uint8_t)eax != 0xc3u) goto L_1023b1a3;
    eax = 0xa1u;
    goto L_1023b1cd;
L_1023b1a3: ;
    if ((uint8_t)eax != 0xc7u) goto L_1023b1ae;
    eax = 0xa2u;
    goto L_1023b1cd;
L_1023b1ae: ;
    if ((uint8_t)eax != 0xceu) goto L_1023b1b9;
    eax = 0xa3u;
    goto L_1023b1cd;
L_1023b1b9: ;
    if ((uint8_t)eax != 0xd5u) goto L_1023b1c4;
    eax = 0xa4u;
    goto L_1023b1cd;
L_1023b1c4: ;
    if ((uint8_t)eax != 0xc8u) goto L_1023b1f9;
    eax = 0xa7u;
    goto L_1023b1cd;
L_1023b1f6: ;
    edi = edi + 6u;
    goto L_1023b1f9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023b0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023b0f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
