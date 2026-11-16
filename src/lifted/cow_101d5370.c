/* f_0x101d5370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d5370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    if (rd8(self) == 0u) goto L_101d5402;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x100a0080u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101d53ef;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
    t5 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xa0u);
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t5 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_101d53d9;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    edi = t5;
    if (eax == 0u) goto L_101d53d9;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x10062ed0u), ecx, 4, 0x13aeu, 0x6e69616du, edi, eax);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u) goto L_101d5402;
    ecx = t10;
    edx = t11;
    t12 = (ecx & 0xffffff00u) | rd8(self + 2u);
    t13 = (edx & 0xffffff00u) | rd8(self + 1u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100f0f30u), 2, t13, t12);
    wr8(self, 0u);
    return;
L_101d53d9: ;
    t14 = (eax & 0xffffff00u) | rd8(self + 2u);
    t15 = (ecx & 0xffffff00u) | rd8(self + 1u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100f0f30u), 2, t15, t14);
    wr8(self, 0u);
    return;
L_101d53ef: ;
    t16 = (edx & 0xffffff00u) | rd8(self + 2u);
    t17 = (eax & 0xffffff00u) | rd8(self + 1u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100f0f30u), 2, t17, t16);
    wr8(self, 0u);
L_101d5402: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d5370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
