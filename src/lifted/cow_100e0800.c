/* f_0x100e0800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e0800(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = arg1 + 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e08d0u), self, 1, arg1 + 4u);
    if ((int16_t)t1 >= 0)
    {
        eax = t1;
        goto L_100e0818;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_100e0818: ;
    if (rd16((uint32_t)(int16_t)eax * 0x1cu + rd32(COW_IMG(0x104dfd98u)) + 0x1a6a6u) == 0xffffu)
    {
        ecx = (uint32_t)(int16_t)eax * 0x1cu + rd32(COW_IMG(0x104dfd98u)) + 0x1a6a4u;
        edx = rd32(COW_IMG(0x104dfd98u));
        esi = ((uint32_t)(int16_t)eax * 8u - (uint32_t)(int16_t)eax & 0xffff0000u) | rd16((uint32_t)(int16_t)eax * 0x1cu + rd32(COW_IMG(0x104dfd98u)) + 0x1a6a6u);
    }
    else
    {
        ecx = (uint32_t)(int16_t)eax * 0x1cu + rd32(COW_IMG(0x104dfd98u)) + 0x1a6a4u;
        edx = rd32(COW_IMG(0x104dfd98u));
        esi = ((uint32_t)(int16_t)eax * 8u - (uint32_t)(int16_t)eax & 0xffff0000u) | rd16((uint32_t)(int16_t)eax * 0x1cu + rd32(COW_IMG(0x104dfd98u)) + 0x1a6a6u);
        t2 = rd16(ecx);
        wr16(edx + (uint32_t)(int16_t)esi * 0x1cu + 0x1a6a4u, (uint16_t)t2);
        edx = rd32(COW_IMG(0x104dfd98u));
        esi = ((uint32_t)(int16_t)esi & 0xffff0000u) | t2;
    }
    if (rd16(ecx) == 0xffffu)
    {
        esi = (esi & 0xffff0000u) | rd16(ecx);
    }
    else
    {
        esi = (esi & 0xffff0000u) | rd16(ecx);
        t3 = rd16(ecx + 2u);
        wr16(edx + (uint32_t)(int16_t)esi * 0x1cu + 0x1a6a6u, (uint16_t)t3);
        edx = rd32(COW_IMG(0x104dfd98u));
        esi = ((uint32_t)(int16_t)esi & 0xffff0000u) | t3;
    }
    if (rd16(ecx + 2u) == 0xffffu)
    {
        wr16(edx + 0x1a6a0u, rd16(ecx));
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    if (rd16(edx + 0x1a6a2u) == (uint16_t)eax)
    {
        t4 = rd16(ecx + 2u);
        wr16(edx + 0x1a6a2u, (uint16_t)t4);
        eax = (eax & 0xffff0000u) | t4;
    }
    wr16(ecx + 4u, 0xffffu);
    wr16(ecx, 0xffffu);
    wr16(ecx + 2u, 0xffffu);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
