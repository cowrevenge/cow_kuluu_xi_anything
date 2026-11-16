/* f_0x100b3e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b3e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if ((uint32_t)(int8_t)rd8(self + rd16(self + 0x258u) * 0x20u + 0x3bu) == 0u) goto L_100b3f57;
    eax = (uint32_t)(int8_t)rd8(self + rd16(self + 0x258u) * 0x20u + 0x3bu);
    if (eax != 1u) goto L_100b3fa9;
    wr32(sp0 - 0x18u, sp0 - 6u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t2 = g->edx;
    wr32(sp0 - 0x20u, t1);
    g->esp = sp0 - 0x14u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 6u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 1u) goto L_100b3fa9;
    ecx = t4;
    edx = t5;
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t6);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t6, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t8 = g->edx;
    if (t7 == 0u) goto L_100b3fa9;
    edx = t8;
    edi = t7;
    t9 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t9);
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t9, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    if (t10 == 0u) goto L_100b3fa9;
    eax = t10;
    if (rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u) == 0u) goto L_100b3fa9;
    ecx = rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u);
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) == 0u) goto L_100b3fa9;
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    if (!(rd32(ecx + 0x120u) >> 7u & 1u)) goto L_100b3fa9;
    if (!(rd32(eax + 0x120u) >> 7u & 1u)) goto L_100b3fa9;
    eax = rd32(eax + 0x120u) >> 7u;
    if ((int8_t)rd8(ecx + 0x120u) >= 0) goto L_100b3fa9;
    t11 = (in_ebx & 0xffffff00u) | 1u;
    wr32(sp0 - 4u, t11);
    t12 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u);
    wr32(sp0 - 0x18u, t12);
    t13 = rd32(self + 0x20u);
    g->esp = sp0 - 0x14u;
    t14 = cow_thiscall(g, COW_IMG(0x100b36d0u), rd32(ecx + 0xd4u), 1, t12);
    if (t14 == 0u) goto L_100b3fa9;
    eax = t14;
    ebx = rd32(sp0 - 4u);
    if (eax == 0xffffffffu) goto L_100b3fa9;
    wr8(self + 0x25au, (uint8_t)ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100b3f57: ;
    wr32(sp0 - 0x18u, sp0 - 6u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x1cu;
    t15 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t16 = g->edx;
    wr32(sp0 - 0x20u, t15);
    g->esp = sp0 - 0x14u;
    t17 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t16, 3, t15, sp0 - 4u, sp0 - 6u);
    if ((uint8_t)t17 != 1u) goto L_100b3fa9;
    t18 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    wr32(sp0 - 0x18u, t18);
    t19 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u);
    wr32(sp0 - 0x1cu, t19);
    t20 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t20);
    t21 = rd32(sp0 - 4u);
    wr32(sp0 - 0x24u, t21);
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x100b39a0u), 4, t21, t20, t19, t18);
    if (t22 == 1u) goto L_100b3fc9;
    eax = t22 - 1u;
    if (eax == 1u) goto L_100b3fd9;
L_100b3fa9: ;
    wr8(self + rd16(self + 0x258u) * 0x20u + 0x3bu, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
L_100b3fc9: ;
    wr8(self + rd16(self + 0x258u) * 0x20u + 0x3bu, 1u);
L_100b3fd9: ;
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b3e50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
