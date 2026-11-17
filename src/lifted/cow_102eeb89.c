/* f_0x102eeb89 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102eeb89(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(arg1 + 0x14u) + 4u) != 0u)
    {
        ecx = self;
        ebx = rd32(rd32(arg1 + 0x14u) + 4u);
        esi = rd32(arg1 + 0x14u);
        edi = rd32(rd32(arg1 + 0x14u));
        goto L_102eebb0;
    }
    esi = rd32(arg1 + 0x14u);
    g->eax = arg1;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, rd32(esi + 0xcu), self, 0);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_102eebc5;
    }
    ecx = arg1;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102eebb0: ;
    if (ebx != 1u)
    {
        edx = rd8(edi);
        ebx = ebx - 1u;
        edi = edi + 1u;
        goto L_102eebd4;
    }
    edx = rd8(edi);
    loc_8 = rd8(edi);
    g->eax = arg1;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    if ((uint8_t)t2 != 0u) goto L_102eebc9;
    eax = t2;
L_102eebc5: ;
    eax = eax & 0xffffff00u;
L_102eec1b: ;
    return eax;
L_102eebc9: ;
    edx = loc_8;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102eebd4: ;
    if (edx != 0xffu)
    {
        ebx = ebx - 1u;
        loc_8 = rd8(edi);
        edi = edi + 1u;
        goto L_102eebec;
    }
    ecx = rd8(edi);
    ebx = ebx - 1u;
    loc_8 = rd8(edi);
    edi = edi + 1u;
    if (ecx == 0xd8u) goto L_102eec0e;
L_102eebec: ;
    wr32(rd32(arg1) + 0x14u, 0x34u);
    wr32(rd32(arg1) + 0x18u, edx);
    wr32(rd32(arg1) + 0x1cu, loc_8);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(arg1)), rd32(arg1), 0);
    ecx = loc_8;
L_102eec0e: ;
    wr32(arg1 + 0x178u, ecx);
    wr32(esi, edi);
    wr32(esi + 4u, ebx);
    eax = (arg1 & 0xffffff00u) | 1u;
    goto L_102eec1b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eeb89(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eeb89(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
