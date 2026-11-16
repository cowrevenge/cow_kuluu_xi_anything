/* f_0x10249d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10249d90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, COW_IMG(0x106690ccu));
    t1 = g->ecx;
    eax = rd32(COW_IMG(0x106690fcu));
    ecx = t1;
    edx = 0u;
    esi = 0u;
    edi = rd32(COW_IMG(0x106690fcu)) + 0x108u;
L_10249dac: ;
    if (rd32(eax) != 0u)
    {
        if ((int32_t)edx >= (int32_t)rd32(eax + 8u))
        {
            ecx = rd32(eax + 8u);
        }
        else
        {
            ecx = rd32(eax + 8u);
            edx = ecx;
            esi = eax;
        }
    }
    if (eax + 0xcu < edi)
    {
        eax = eax + 0xcu;
        goto L_10249dac;
    }
    eax = eax + 0xcu;
    if (esi == 0u) goto L_10249e0b;
    if (rd32(esi) == 0u)
    {
        edx = rd32(esi);
        goto L_10249e09;
    }
    edx = rd32(esi);
    if ((int32_t)rd32(esi + 8u) <= 0)
    {
        eax = rd32(esi + 8u);
        goto L_10249e09;
    }
    eax = rd32(COW_IMG(0x106690c8u));
    ecx = rd32(COW_IMG(0x106690c8u));
L_10249ddc: ;
    if (rd32(eax + 8u) == edx) goto L_10249e09;
    if (eax + 0xf4u < ecx + 0x1310u)
    {
        eax = eax + 0xf4u;
        goto L_10249ddc;
    }
    eax = eax + 0xf4u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10249d60u), 3, esi, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t3, 1, COW_IMG(0x106690ccu));
    return esi;
L_10249e09: ;
    esi = 0u;
L_10249e0b: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10249d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10249d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
