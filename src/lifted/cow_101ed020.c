/* f_0x101ed020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ed020(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb1b0u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        edx = t3;
        goto L_101ed05d;
    }
    ecx = t2;
    edx = t3;
    edi = t1;
    esi = 0u;
L_101ed03b: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x100eb160u), 3, 1u, esi, sp0 - 4u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101ed058;
    }
    ecx = t5;
    edx = t6;
    if (rd16(rd32(sp0 - 4u)) == (uint16_t)arg1)
    {
        eax = rd32(sp0 - 4u);
        goto L_101ed05f;
    }
L_101ed058: ;
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        esi = esi + 1u;
        goto L_101ed03b;
    }
L_101ed05d: ;
    eax = 0u;
    loc_4 = self;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_101ed05f: ;
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = loc_10;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed020(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
