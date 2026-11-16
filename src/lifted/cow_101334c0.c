/* f_0x101334c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101334c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        loc_4 = self;
        goto L_1013354c;
    }
    if (rd32(sp0 + 0xcu) == 9u)
    {
        esi = rd32(COW_IMG(0x10666e6cu));
    }
    else
    {
        esi = rd32(COW_IMG(0x10666e30u));
    }
    t1 = rd32(esi + 0xcu);
    wr32(sp0 + 0xcu, esi);
    t2 = rd8(esi + t1 + 0x18u);
    if ((int32_t)rd8(esi + t1 + 0x18u) <= 0)
    {
        eax = t1;
        loc_4 = t2;
        goto L_1013354c;
    }
    edx = in_edx;
    ebx = t2;
    ebp = 0u;
    loc_4 = t2;
L_101334f9: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x1021cb80u), esi, 1, ebp);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_10133547;
    }
    eax = t3;
    edx = t4;
    edi = t3;
    if ((int16_t)arg2 < 0) goto L_10133516;
    eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    if ((uint8_t)eax != rd8(edi + 2u)) goto L_10133547;
L_10133516: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x1021cbf0u), esi, 1, ebp);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t7;
        goto L_10133547;
    }
    ecx = t6;
    edx = t7;
    esi = 0u;
    edi = edi + 0x10u;
L_10133527: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x100fe910u), 2, edi, esi);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == (uint8_t)arg1)
    {
        eax = t8;
        goto L_10133556;
    }
    eax = t8;
    ecx = (t9 & 0xffffff00u) | (uint8_t)arg1;
    edx = t10;
    if ((int32_t)(esi + 1u) < 16)
    {
        esi = esi + 1u;
        goto L_10133527;
    }
    ebx = loc_4;
    esi = rd32(sp0 + 0xcu);
L_10133547: ;
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        ebp = ebp + 1u;
        goto L_101334f9;
    }
L_1013354c: ;
    return eax & 0xffffff00u;
L_10133556: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101334c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101334c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
