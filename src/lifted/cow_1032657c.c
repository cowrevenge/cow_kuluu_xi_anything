/* f_0x1032657c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1032657c(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_ebx);
    if (rd32(sp0 + 8u) != 0u)
    {
        sf = (int32_t)rd32(sp0 + 8u) < 0;
        if (!sf)
        {
            ebx = COW_IMG(0x103d38b0u);
        }
        else
        {
            t1 = -rd32(sp0 + 8u);
            wr32(sp0 + 8u, t1);
            ebx = COW_IMG(0x103d3a10u);
        }
        if (arg3 == 0u)
        {
            wr16(arg1, 0u);
        }
        if (rd32(sp0 + 8u) != 0u)
        {
            wr32(sp0 - 0x18u, in_esi);
            wr32(sp0 - 0x1cu, in_edi);
            edx = in_edx;
L_103265b6: ;
            t2 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, (uint32_t)((int32_t)t2 >> 3u));
            if ((t2 & 7u) == 0u)
            {
                ebx = ebx + 0x54u;
            }
            else
            {
                eax = t2 & 7u;
                ebx = ebx + 0x54u;
                if (rd16(eax * 0xcu + ebx) < 0x8000u)
                {
                    esi = eax * 0xcu + ebx;
                    eax = eax * 3u;
                }
                else
                {
                    esi = eax * 0xcu + ebx;
                    eax = eax * 3u;
                    edi = sp0 - 0x10u;
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(sp0 - 0xeu, rd32(sp0 - 0xeu) - 1u);
                    esi = sp0 - 0x10u;
                }
                wr32(sp0 - 0x20u, esi);
                wr32(sp0 - 0x24u, arg1);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall_cdecl(g, COW_IMG(0x1032635cu), 0u, 4, arg1, esi, in_edi, in_esi);
                t3 = g->edx;
                edx = t3;
            }
            if (rd32(sp0 + 8u) != 0u) goto L_103265b6;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032657c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032657c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
