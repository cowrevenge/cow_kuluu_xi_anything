/* f_0x101a86c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a86c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ecx = 0u;
    loc_4 = (self & 0xffffff00u) | rd8(self + 0x66cu);
L_101a86d7: ;
    if (rd8(self + (uint8_t)loc_4 * 2u + 0x644u) == 0xffu)
    {
        edi = loc_4;
        goto L_101a870b;
    }
    eax = (uint8_t)loc_4;
    edi = loc_4;
    if (rd8(eax * 2u + self + 0x645u) == 0xffu) goto L_101a870b;
    eax = (eax & 0xffffff00u) | rd8(eax * 2u + self + 0x645u);
    if ((int32_t)ecx >= 19) goto L_101a870b;
    if ((int32_t)(ecx + 1u) < 20)
    {
        ecx = ecx + 1u;
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)eax;
        goto L_101a86d7;
    }
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)eax;
    g->edx = 0xffu;
    return 0u;
L_101a870b: ;
    t1 = self + (uint8_t)edi * 0x50u + 4u;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x101a85d0u), (uint8_t)edi * 0x50u, 2, t1, arg1);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101a8610u), self, 2, edi, arg2);
    t4 = g->edx;
    g->edx = t4;
    return ~-((uint8_t)((uint8_t)t3 - 1u) != 0u) & t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a86c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a86c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
