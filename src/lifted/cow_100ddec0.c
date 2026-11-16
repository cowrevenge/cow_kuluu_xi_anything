/* f_0x100ddec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100ddec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg3 * 8u + rd32(arg1) >= rd32(arg1))
    {
        eax = rd32(arg1) >> 3u & 0x3fu;
        esi = arg3 * 8u + rd32(arg1);
    }
    else
    {
        eax = rd32(arg1) >> 3u & 0x3fu;
        esi = arg3 * 8u + rd32(arg1);
        wr32(arg1 + 4u, rd32(arg1 + 4u) + 1u);
    }
    wr32(arg1, esi);
    t1 = (arg3 >> 0x1du) + rd32(arg1 + 4u);
    wr32(arg1 + 4u, t1);
    if (arg3 != 0u)
    {
        wr32(sp0 - 0x4cu, in_ebx);
        wr32(sp0 - 0x50u, in_ebp);
        edx = arg3;
        ebx = arg3;
        ebp = arg2;
L_100ddefc: ;
        t2 = rd8(ebp);
        wr8(arg1 + eax + 0x18u, (uint8_t)t2);
        if (eax + 1u != 0x40u)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t2;
            ebp = ebp + 1u;
        }
        else
        {
            ebp = ebp + 1u;
            eax = arg1 + 0x1au;
            esi = 0u;
L_100ddf0f: ;
            t3 = ((rd8(eax + 1u) << 8u | rd8(eax)) << 8u | rd8(eax - 1u)) << 8u | rd8(eax - 2u);
            t4 = rd8(eax - 2u);
            wr32(esi * 4u + sp0 - 0x40u, t3);
            if (esi + 1u < 0x10u)
            {
                eax = eax + 4u;
                esi = esi + 1u;
                goto L_100ddf0f;
            }
            edx = t4;
            wr32(sp0 - 0x54u, sp0 - 0x40u);
            wr32(sp0 - 0x58u, arg1 + 8u);
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            cow_cdecl(g, COW_IMG(0x100de010u), 2, arg1 + 8u, sp0 - 0x40u);
            t5 = g->edx;
            eax = 0u;
            edx = t5;
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_100ddefc;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ddec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ddec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
