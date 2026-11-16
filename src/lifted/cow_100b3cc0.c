/* f_0x100b3cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100b3cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100b3660u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_100b3cdb;
    }
    eax = t1;
    return 0xffffffffu;
L_100b3cdb: ;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100b3660u), 1, arg2);
    if (t4 != 0u)
    {
        eax = t4;
        goto L_100b3cf2;
    }
    eax = t4;
    return 0xffffffffu;
L_100b3cf2: ;
    if (rd32(COW_IMG(0x10480af0u) + rd32(esi) * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + rd32(esi) * 4u);
        goto L_100b3d05;
    }
    return 0xffffffffu;
L_100b3d05: ;
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
        goto L_100b3d18;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    return 0xffffffffu;
L_100b3d18: ;
    if (rd32(ecx + 0x120u) >> 7u & 1u) goto L_100b3d2c;
    return 0xffffffffu;
L_100b3d2c: ;
    if (rd32(eax + 0x120u) >> 7u & 1u)
    {
        eax = rd32(eax + 0x120u) >> 7u;
        goto L_100b3d3f;
    }
    eax = rd32(eax + 0x120u) >> 7u;
    return 0xffffffffu;
L_100b3d3f: ;
    if ((int8_t)rd8(ecx + 0x120u) < 0) goto L_100b3d4f;
    eax = (eax & 0xffffff00u) | rd8(ecx + 0x120u);
    return 0xffffffffu;
L_100b3d4f: ;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x100b37d0u), arg3, rd32(ecx + 0xd4u), g->edx, 0, 3, arg2, arg3, arg4);
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b3cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
