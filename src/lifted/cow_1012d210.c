/* f_0x1012d210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1012d210(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr16(self + 0x14u, (uint16_t)((uint16_t)arg1 + rd16(self + 0x14u)));
    if ((int16_t)rd16(self + 0x14u) <= -3)
    {
        edx = in_edx;
        goto L_1012d290;
    }
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x14u);
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
    edi = arg1;
L_1012d22b: ;
    if ((uint32_t)(int16_t)eax == 0xfffffffeu) goto L_1012d273;
    eax = (uint32_t)(int16_t)eax;
    if (eax == 0xffffffffu) goto L_1012d266;
    if ((int32_t)eax < (int32_t)rd32(rd32(COW_IMG(0x1066268cu)) + 0x88u)) goto L_1012d29b;
    if ((uint8_t)ebx == 0u)
    {
        wr16(self + 0x14u, 0xfffcu);
        edi = 1u;
    }
    else
    {
        wr16(self + 0x14u, 0xfffdu);
        ebx = ebx & 0xffffff00u;
        edi = 1u;
    }
L_1012d282: ;
    wr16(self + 0x14u, (uint16_t)((uint16_t)edi + rd16(self + 0x14u)));
    if ((int16_t)rd16(self + 0x14u) > -3)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        goto L_1012d22b;
    }
L_1012d290: ;
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x1012d1d0u), 0);
    wr16(self + 0x14u, (uint16_t)t5);
L_1012d29b: ;
    return;
L_1012d266: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_1012d27e: ;
    if (eax != 0u) goto L_1012d29b;
    goto L_1012d282;
L_1012d273: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1018d9f0u), rd32(COW_IMG(0x1066268cu)), 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    goto L_1012d27e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012d210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012d210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
