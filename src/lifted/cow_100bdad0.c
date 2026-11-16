/* f_0x100bdad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100bdad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg2) == 0x5bu)
    {
        ecx = arg2;
        edx = (in_edx & 0xffffff00u) | rd8(arg2);
        goto L_100bdaf0;
    }
    ecx = arg2;
    edx = (in_edx & 0xffffff00u) | rd8(arg2);
L_100bdae7: ;
    if (rd8(ecx + 1u) != 0x5bu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_100bdae7;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_100bdaf0: ;
    if ((int32_t)arg4 <= 0)
    {
        ecx = ecx + 1u;
        goto L_100bdb22;
    }
    ecx = ecx + 1u;
    esi = 0u;
L_100bdafb: ;
    if (rd8(ecx) == 0x2fu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb1c;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb02: ;
    if ((uint8_t)edx == 0u)
    {
        eax = arg1;
        goto L_100bdb62;
    }
    if ((uint8_t)edx == 0x5du)
    {
        eax = arg1;
        goto L_100bdb61;
    }
    if ((int8_t)edx >= 0)
    {
        ecx = ecx + 1u;
    }
    else
    {
        ecx = ecx + 2u;
    }
    if (rd8(ecx) != 0x2fu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb02;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb1c: ;
    if ((int32_t)(esi + 1u) < (int32_t)arg4)
    {
        ecx = ecx + 1u;
        esi = esi + 1u;
        goto L_100bdafb;
    }
    ecx = ecx + 1u;
L_100bdb22: ;
    if (rd8(ecx) == 0x2fu)
    {
        eax = arg1;
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb47;
    }
    eax = arg1;
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb29: ;
    if ((uint8_t)edx == 0x5du) goto L_100bdb61;
    if ((uint8_t)edx == 0u) goto L_100bdb62;
    sf = (int8_t)edx < 0;
    wr8(eax, (uint8_t)edx);
    if (sf)
    {
        t1 = rd8(ecx + 1u);
        wr8(eax + 1u, (uint8_t)t1);
        eax = eax + 1u;
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t1;
    }
    if (rd8(ecx + 1u) != 0x2fu)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_100bdb29;
    }
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_100bdb47: ;
    if (rd8(ecx) == 0x5du) goto L_100bdb61;
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb4e: ;
    if ((uint8_t)edx == 0u) goto L_100bdb62;
    sf = (int8_t)edx < 0;
    if (!sf)
    {
        ecx = ecx + 1u;
    }
    else
    {
        ecx = ecx + 2u;
    }
    if (rd8(ecx) != 0x5du)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb4e;
    }
L_100bdb61: ;
    ecx = ecx + 1u;
L_100bdb62: ;
    wr32(arg3, ecx - arg2);
    return eax - arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bdad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100bdad0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
