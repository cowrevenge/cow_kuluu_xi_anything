/* f_0x1013e2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013e2f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013e3a3;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x1013e730u), in_eax, g->ecx, g->edx, 1, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1013e3a3;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_1013e33f;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    if (rd16(self + 0x24u) != rd16(arg1))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
        goto L_1013e352;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
    if (rd8(self + 0x26u) != rd8(arg1 + 2u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_1013e352;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x26u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, arg1);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    zf = rd32(self + 0x340u) == t4;
L_1013e350: ;
    if (zf) goto L_1013e3aa;
L_1013e352: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1013bf40u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd16(arg1);
    wr16(self + 0x24u, (uint16_t)t8);
    t9 = rd8(arg1 + 2u);
    wr8(self + 0x26u, (uint8_t)t9);
    wr32(self + 0x348u, arg1 + 0x10u);
    t10 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, arg1);
    wr32(self + 0x340u, t10);
    if (t10 == 0x12u)
    {
        wr32(self + 0x340u, 0u);
    }
    wr32(self + 0x374u, 0u);
    wr8(self + 0x3a7u, 0u);
    return;
L_1013e33f: ;
    if (rd16(self + 0x24u) != rd16(arg1))
    {
        edx = (edx & 0xffff0000u) | rd16(self + 0x24u);
        goto L_1013e352;
    }
    edx = (edx & 0xffff0000u) | rd16(self + 0x24u);
    eax = (eax & 0xffffff00u) | rd8(self + 0x26u);
    zf = (uint8_t)(rd8(self + 0x26u) - rd8(arg1 + 2u)) == 0u;
    goto L_1013e350;
L_1013e3a3: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1013bf40u), self, 0);
L_1013e3aa: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013e2f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
