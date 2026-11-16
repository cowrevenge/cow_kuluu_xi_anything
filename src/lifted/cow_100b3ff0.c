/* f_0x100b3ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b3ff0(Guest* g)
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    if ((uint32_t)(int8_t)rd8(self + rd16(self + 0x258u) * 0x20u + 0x3bu) == 0u) goto L_100b41e9;
    eax = (uint32_t)(int8_t)rd8(self + rd16(self + 0x258u) * 0x20u + 0x3bu);
    if (eax == 1u) goto L_100b40fe;
    eax = eax - 1u;
    if (eax != 1u) goto L_100b423c;
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
    if ((uint8_t)t3 != 1u) goto L_100b423c;
    ecx = t4;
    edx = t5;
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t6);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t6, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t8 = g->edx;
    if (t7 == 0u) goto L_100b423c;
    edx = t8;
    edi = t7;
    t9 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t9);
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t9, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    if (t10 == 0u) goto L_100b423c;
    eax = t10;
    if (rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u) == 0u) goto L_100b423c;
    ecx = rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u);
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) == 0u) goto L_100b423c;
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    if (!(rd32(ecx + 0x120u) >> 7u & 1u)) goto L_100b423c;
    if (!(rd32(eax + 0x120u) >> 7u & 1u)) goto L_100b423c;
    eax = rd32(eax + 0x120u) >> 7u;
    if ((int8_t)rd8(ecx + 0x120u) >= 0) goto L_100b423c;
    t11 = (in_ebx & 0xffffff00u) | 1u;
    wr32(sp0 - 4u, t11);
    t12 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u);
    wr32(sp0 - 0x18u, t12);
    t13 = rd32(self + 0x20u);
    g->esp = sp0 - 0x14u;
    t14 = cow_thiscall(g, COW_IMG(0x100b36d0u), rd32(ecx + 0xd4u), 1, t12);
    if (t14 == 0xffffffffu) goto L_100b423c;
    ebx = rd32(sp0 - 4u);
    wr8(self + 0x25au, (uint8_t)ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100b40fe: ;
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
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 1u) goto L_100b423c;
    ecx = t18;
    edx = t19;
    t20 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t20);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t20, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t22 = g->edx;
    if (t21 == 0u) goto L_100b423c;
    edx = t22;
    edi = t21;
    t23 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t23);
    g->esp = sp0 - 4u;
    t24 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t23, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    if (t24 == 0u) goto L_100b423c;
    eax = t24;
    if (rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u) == 0u) goto L_100b423c;
    ecx = rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u);
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) == 0u) goto L_100b423c;
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    if (!(rd32(ecx + 0x120u) >> 7u & 1u)) goto L_100b423c;
    if (!(rd32(eax + 0x120u) >> 7u & 1u)) goto L_100b423c;
    eax = rd32(eax + 0x120u) >> 7u;
    if ((int8_t)rd8(ecx + 0x120u) >= 0)
    {
        ebx = (in_ebx & 0xffffff00u) | 1u;
        goto L_100b41cb;
    }
    t25 = (in_ebx & 0xffffff00u) | 1u;
    wr32(sp0 - 4u, t25);
    t26 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u);
    wr32(sp0 - 0x18u, t26);
    t27 = rd32(self + 0x20u);
    g->esp = sp0 - 0x14u;
    t28 = cow_thiscall(g, COW_IMG(0x100b36d0u), rd32(ecx + 0xd4u), 1, t26);
    if (t28 == 0u)
    {
        ebx = rd32(sp0 - 4u);
        goto L_100b41cb;
    }
    eax = t28;
    ebx = rd32(sp0 - 4u);
    if (eax != 0xffffffffu) goto L_100b41dc;
L_100b41cb: ;
    wr8(self + rd16(self + 0x258u) * 0x20u + 0x3bu, 2u);
L_100b41dc: ;
    wr8(self + 0x25au, (uint8_t)ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100b41e9: ;
    wr32(sp0 - 0x18u, sp0 - 6u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = sp0 - 6u;
    g->esp = sp0 - 0x1cu;
    t29 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t30 = g->edx;
    wr32(sp0 - 0x20u, t29);
    g->esp = sp0 - 0x14u;
    t31 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t30, 3, t29, sp0 - 4u, sp0 - 6u);
    if ((uint8_t)t31 != 1u) goto L_100b423c;
    t32 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    wr32(sp0 - 0x18u, t32);
    t33 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u);
    wr32(sp0 - 0x1cu, t33);
    t34 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t34);
    t35 = rd32(sp0 - 4u);
    wr32(sp0 - 0x24u, t35);
    g->esp = sp0 - 0x14u;
    t36 = cow_cdecl(g, COW_IMG(0x100b39a0u), 4, t35, t34, t33, t32);
    if (t36 == 1u) goto L_100b425c;
    eax = t36 - 1u;
    if (eax == 1u) goto L_100b426c;
L_100b423c: ;
    wr8(self + rd16(self + 0x258u) * 0x20u + 0x3bu, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
L_100b425c: ;
    wr8(self + rd16(self + 0x258u) * 0x20u + 0x3bu, 1u);
L_100b426c: ;
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b3ff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
