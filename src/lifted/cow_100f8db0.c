/* f_0x100f8db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100f8db0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u)
    {
        ecx = arg1;
    }
    else
    {
        eax = in_eax;
        ecx = arg1;
        esi = arg2;
        edi = 0u;
L_100f8dcf: ;
        if (rd8(esi) == 0u) goto L_100f8e94;
        eax = (eax & 0xffffff00u) | rd8(esi);
        if ((uint16_t)edi >= (uint16_t)arg3) goto L_100f8e94;
        if ((uint8_t)eax < 0x61u) goto L_100f8e0c;
        if ((uint8_t)eax > 0x7au) goto L_100f8e0c;
        if ((int32_t)rd32(rd32(COW_IMG(0x104e0af4u)) + 4u) <= 1)
        {
            eax = (uint8_t)eax;
        }
        else
        {
            eax = (uint8_t)eax;
            if ((uint16_t)edi == 0u)
            {
                eax = eax - 0x20u;
            }
        }
L_100f8e87: ;
        wr8(ecx, (uint8_t)eax);
        ecx = ecx + 1u;
        esi = esi + 1u;
        edi = edi + 1u;
L_100f8e8c: ;
        if (esi != 0u) goto L_100f8dcf;
    }
L_100f8e94: ;
    wr8(ecx, 0u);
    return;
L_100f8e0c: ;
    if ((uint8_t)eax < 0x41u) goto L_100f8e2e;
    if ((uint8_t)eax > 0x5au) goto L_100f8e2e;
    if ((int32_t)rd32(rd32(COW_IMG(0x104e0af4u)) + 4u) <= 1)
    {
        eax = (uint8_t)eax;
    }
    else
    {
        eax = (uint8_t)eax;
        if ((uint16_t)edi != 0u)
        {
            eax = eax + 0x20u;
        }
    }
    goto L_100f8e87;
L_100f8e2e: ;
    if ((rd8(COW_IMG(0x109f9561u) + (uint8_t)eax) & 4u) == 0u) goto L_100f8e7f;
    if (rd8(esi + 1u) == 0u) goto L_100f8e94;
    edx = rd8(esi + 1u);
    if ((rd8(COW_IMG(0x109f9561u) + (uint8_t)edx) & 8u) == 0u) goto L_100f8e94;
    if ((int32_t)((uint16_t)edi + 1u) >= (int32_t)(uint16_t)arg3) goto L_100f8e94;
    wr8(ecx, (uint8_t)eax);
    t1 = rd8(esi + 1u);
    wr8(ecx + 1u, (uint8_t)t1);
    eax = (eax & 0xffffff00u) | t1;
    ecx = ecx + 2u;
    esi = esi + 2u;
    edi = edi + 2u;
    goto L_100f8e8c;
L_100f8e7f: ;
    if ((uint8_t)eax < 0x20u) goto L_100f8e94;
    if ((uint8_t)eax >= 0x7fu) goto L_100f8e94;
    goto L_100f8e87;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100f8db0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
