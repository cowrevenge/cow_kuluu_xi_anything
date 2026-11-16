/* f_0x10223040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10223040(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1066714cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066714cu));
        loc_4 = self;
        goto L_102230ac;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10223c90u), rd32(COW_IMG(0x10667150u)), 0);
    t1 = g->edx;
    if ((int32_t)rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u) <= 0)
    {
        eax = rd32(COW_IMG(0x10667150u));
        loc_4 = 0u;
        goto L_102230ac;
    }
    eax = rd32(COW_IMG(0x10667150u));
    edx = t1;
    edi = rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u);
    ecx = eax + 0x160u;
    edx = (edx & 0xffffff00u) | (uint8_t)arg2;
    ebx = rd32(COW_IMG(0x1066714cu));
    esi = 0u;
    loc_4 = 0u;
L_1022307e: ;
    if (rd8(ebx + rd16(ecx) * 0x30u + 2u) != (uint8_t)edx)
    {
        eax = ebx + rd16(ecx) * 0x30u;
        goto L_102230a4;
    }
    eax = ebx + rd16(ecx) * 0x30u;
    if ((uint8_t)arg1 == loc_4) goto L_102230b5;
    loc_4 = loc_4 + 1u;
L_102230a4: ;
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        ecx = ecx + 2u;
        esi = esi + 1u;
        goto L_1022307e;
    }
L_102230ac: ;
    return 0xffffffffu;
L_102230b5: ;
    return rd16(eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
