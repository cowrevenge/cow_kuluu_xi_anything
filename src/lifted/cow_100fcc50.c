/* f_0x100fcc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fcc50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100fcd6c;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 >= 2u)
    {
        eax = arg1;
        goto L_100fcd6c;
    }
    if (rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u) != (uint8_t)(arg2 >> 8u))
    {
        eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
        goto L_100fcd6c;
    }
    eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
    esi = ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u;
    if ((uint8_t)eax == 0x11u)
    {
        eax = (uint8_t)eax - 0x11u;
        goto L_100fcd30;
    }
    eax = (uint8_t)eax - 0x11u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100fcd6c;
    }
    if ((uint8_t)arg2 != 1u) goto L_100fccf6;
    if ((uint16_t)arg3 >= 0x100u) goto L_100fccf6;
    if ((int32_t)(arg3 & 7u) >= 0)
    {
        ecx = arg3 & 7u;
        pf = PARITY(arg3 & 7u);
        zf = (arg3 & 7u) == 0u;
        sf = (int32_t)(arg3 & 7u) < 0;
        of = 0u;
    }
    else
    {
        ecx = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    return ((uint16_t)arg3 >> 3u & 0xffffff00u) | (uint8_t)(1u << (ecx & 0x1fu) & (((uint16_t)arg3 >> 3u & 0xffffff00u) | rd8(esi + ((uint16_t)arg3 >> 3u) + 0x14u))) != 0u;
L_100fccf6: ;
    if ((uint8_t)arg2 != 2u)
    {
        eax = arg3;
        goto L_100fcd6c;
    }
    if ((uint16_t)arg3 >= 0x100u)
    {
        eax = arg3;
        goto L_100fcd6c;
    }
    if ((int32_t)(arg3 & 7u) >= 0)
    {
        ecx = arg3 & 7u;
        pf = PARITY(arg3 & 7u);
        zf = (arg3 & 7u) == 0u;
        sf = (int32_t)(arg3 & 7u) < 0;
        of = 0u;
    }
    else
    {
        ecx = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    return ((uint16_t)arg3 >> 3u & 0xffffff00u) | (uint8_t)(1u << (ecx & 0x1fu) & (((uint16_t)arg3 >> 3u & 0xffffff00u) | rd8(esi + ((uint16_t)arg3 >> 3u) + 0x34u))) != 0u;
L_100fcd30: ;
    if ((uint8_t)arg2 != 0u) goto L_100fcd6c;
    if ((uint16_t)arg3 >= 0x40u)
    {
        eax = arg3;
        goto L_100fcd6c;
    }
    if ((int32_t)(arg3 & 7u) >= 0)
    {
        ecx = arg3 & 7u;
        pf = PARITY(arg3 & 7u);
        zf = (arg3 & 7u) == 0u;
        sf = (int32_t)(arg3 & 7u) < 0;
        of = 0u;
    }
    else
    {
        ecx = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    return ((uint16_t)arg3 >> 3u & 0xffffff00u) | (uint8_t)(1u << (ecx & 0x1fu) & (((uint16_t)arg3 >> 3u & 0xffffff00u) | rd8(esi + ((uint16_t)arg3 >> 3u) + 4u))) != 0u;
L_100fcd6c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fcc50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fcc50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
