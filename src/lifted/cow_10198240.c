/* f_0x10198240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10198240(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x10379a28u) + arg1 * 4u) != 0x33u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10379a28u) + arg1 * 4u);
        goto L_101982a8;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10379a28u) + arg1 * 4u);
    if ((int8_t)rd8(COW_IMG(0x10379a29u) + arg1 * 4u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10379a29u) + arg1 * 4u);
        goto L_10198278;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10379a29u) + arg1 * 4u);
    if ((int32_t)rd32(self + 0x3cu) < (int32_t)-(uint32_t)(int8_t)eax) goto L_10198312;
    return 1u;
L_10198278: ;
    if ((uint8_t)eax != 2u)
    {
        ecx = self;
        goto L_1019829f;
    }
    if (rd32(self + 0x40u) == 0u)
    {
        ecx = rd32(self + 0x40u);
        goto L_1019829f;
    }
    t1 = rd32(self + 0x38u);
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10193960u), 2, 2u, t1);
    return ((uint8_t)t2 != 0u) + 3u;
L_1019829f: ;
    if ((uint8_t)eax == 0xbu) goto L_10198312;
    eax = (uint32_t)(int8_t)eax;
L_101982dc: ;
    t5 = rd32(self + 0x38u);
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10193960u), 2, eax, t5);
    if ((uint8_t)t6 == 0u) goto L_10198312;
    return 2u;
L_101982a8: ;
    if (rd8(COW_IMG(0x10379a29u) + arg1 * 4u) == 0xbu)
    {
        eax = (uint8_t)eax;
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10379a29u) + arg1 * 4u);
        goto L_101982f7;
    }
    eax = (uint8_t)eax;
    g->ecx = self + 0x30u;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x101939a0u), 2, eax, self + 0x30u);
    t4 = g->ecx;
    if ((uint8_t)t3 == 0u)
    {
        ecx = t4;
        goto L_101982d4;
    }
    return 1u;
L_101982d4: ;
    eax = (uint32_t)(int8_t)rd8(COW_IMG(0x10379a29u) + arg1 * 4u);
    goto L_101982dc;
L_101982f7: ;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x101939a0u), 2, eax, self + 0x30u);
    if ((uint8_t)t7 == 0u) goto L_10198312;
    return 1u;
L_10198312: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198240(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
