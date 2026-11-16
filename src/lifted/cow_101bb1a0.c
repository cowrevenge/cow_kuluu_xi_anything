/* f_0x101bb1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101bb1a0(Guest* g)
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
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    ecx = 0u;
    edx = 0u;
    ebx = in_ebx;
    ebp = rd32(sp0 + 4u);
    esi = COW_IMG(0x1060161bu);
    loc_c = 0u;
    loc_8 = COW_IMG(0x1060161bu);
L_101bb1cc: ;
    t1 = rd8(esi);
    t2 = rd32(esi - 0x1b3u);
    wr8(esi, (uint8_t)(t1 + 1u));
    if (t2 == ecx)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(t1 + 1u);
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(t1 + 1u);
        edi = esi - 0x1b3u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t3 = cow_cdecl(g, COW_IMG(0x101bb100u), 1, edi);
        t4 = g->ecx;
        t5 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            ecx = t4;
            edx = t5;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            if (rd16(edi) != (uint16_t)ecx)
            {
                ebx = (ebx & 0xffff0000u) | rd16(edi);
                if ((uint8_t)(ebx >> 8u) != 0u)
                {
                    if ((uint8_t)ebx != (uint8_t)ecx)
                    {
                        eax = (uint8_t)(ebx >> 8u);
                        ecx = (ecx & 0xffffff00u) | 7u;
                    }
                    else
                    {
                        eax = (uint8_t)(ebx >> 8u);
                        ecx = (ecx & 0xffffff00u) | 0xau;
                        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0xffu);
                    }
                }
                else
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
                    ecx = (ecx & 0xffffff00u) | 9u;
                }
            }
            else
            {
                ebx = (ebx & 0xffff0000u) | rd16(edi);
                eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
                ecx = (ecx & 0xffffff00u) | 8u;
                ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0xffu);
            }
            t6 = (((((ecx & 0xff00ffffu) | eax << 0x10u) & 0xffffffu) | ebx << 0x18u) & 0xffff00ffu) | rd8(self + 4u) << 8u;
            t7 = rd8(self + 4u);
            wr32(ebp + edx, t6);
            edi = esi + 1u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            wr8(sp0 + 4u, (uint8_t)((uint8_t)(~ecx - 1u) + 1u));
            t8 = rd32(sp0 + 4u);
            wr8(ebp + edx + 4u, (uint8_t)((uint8_t)(~ecx - 1u) + 1u));
            esi = esi + 1u;
            edi = ebp + edx + 5u;
            ecx = (uint8_t)t8 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t8 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = edx + (uint8_t)t8 + 5u;
            esi = loc_8;
            loc_c = (((((ecx & 0xff00ffffu) | eax << 0x10u) & 0xffffffu) | ebx << 0x18u) & 0xffff00ffu) | t7 << 8u;
            ecx = 0u;
            ebx = (uint8_t)t8;
        }
    }
    t9 = rd8(esi);
    wr8(esi, (uint8_t)(t9 - 1u));
    if ((int32_t)(esi + 0x294u) < (int32_t)COW_IMG(0x106219bbu))
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(t9 - 1u);
        loc_8 = esi + 0x294u;
        esi = esi + 0x294u;
        goto L_101bb1cc;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bb1a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
