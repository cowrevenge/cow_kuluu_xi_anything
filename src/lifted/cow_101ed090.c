/* f_0x101ed090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ed090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(self + 0x12u) == 0u) goto L_101ed0ad;
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x12u);
    if ((uint16_t)eax == rd16(arg1)) goto L_101ed0ad;
    return 0u;
L_101ed0ad: ;
    if ((int32_t)rd16(arg1) < 513)
    {
        eax = rd16(arg1);
        goto L_101ed0ca;
    }
    eax = rd16(arg1);
    if ((int32_t)eax > 515) goto L_101ed0ca;
    return 0x80404040u;
L_101ed0ca: ;
    if (rd8(arg1 + 8u) != 0x19u) goto L_101ed0da;
    return 0x80404040u;
L_101ed0da: ;
    t1 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), in_edx, 2, t1, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_101ed0f9;
    edx = t3;
    g->edx = edx;
    return 0x80404040u;
L_101ed0f9: ;
    if ((rd32(rd32(arg2 + 0x14bcu)) >> 8u & 0x10u) == 0u)
    {
        eax = rd32(rd32(arg2 + 0x14bcu));
        edx = rd32(arg2 + 0x14bcu);
        goto L_101ed114;
    }
    edx = rd32(arg2 + 0x14bcu);
    g->edx = edx;
    return 0x80404040u;
L_101ed114: ;
    t4 = (eax & 0xffff0000u) | rd16(arg1);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101ed070u), self, 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101ed12d;
    }
    edx = t7;
    g->edx = edx;
    return 0x80404040u;
L_101ed12d: ;
    if (rd8(self + 0x10u) == 0u) goto L_101ed143;
    eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
    if (rd8(self + 0x11u) == rd8(arg1 + 2u))
    {
        eax = 0x80804020u;
        goto L_101ed148;
    }
L_101ed143: ;
    eax = 0x80808080u;
L_101ed148: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed090(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
