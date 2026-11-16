/* f_0x101dcb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101dcb80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101dc1f0u), self, 0);
    t2 = g->edx;
    if ((uint16_t)rd32(sp0 + 4u) != 5u)
    {
        edx = t2;
        ebp = rd32(sp0 + 4u);
        edi = t1;
        goto L_101dcbeb;
    }
    eax = t1;
    edx = t2;
    ebp = rd32(sp0 + 4u);
    edi = t1;
    if (edi != 0u) goto L_101dcba2;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101dcba2: ;
    g->eax = rd16(edi);
    g->edx = edx;
    t3 = rd16(edi);
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t3);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        goto L_101dcbbf;
    }
    eax = t4;
    edx = t5;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101dcbbf: ;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x58u));
    t6 = rd32(rd32(self + 0x58u));
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, rd32(t6 + 0x30u), rd32(self + 0x58u), 2, edi, eax);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_101dcbe3;
    }
    eax = t7;
    edx = t8;
    if (eax == 0x80404040u) goto L_101dcbe3;
    if (eax != 0x80602020u) goto L_101dcbeb;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_stdcall(g, COW_IMG(0x101dcc50u), 1, edi);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101dcbe3: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101dcbeb: ;
    t11 = rd32(rd32(self + 0x58u));
    t12 = rd16(rd32(self + 8u) + 0x4cu);
    wr32(sp0 + 4u, t11);
    g->eax = t11;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x101f7100u), self, 1, edi);
    t14 = g->edx;
    t15 = (in_ebx & 0xffff0000u) | t12;
    g->eax = rd32(sp0 + 4u);
    g->edx = t14;
    t16 = rd32(sp0 + 4u);
    t17 = cow_thiscall(g, rd32(t16 + 0x34u), rd32(self + 0x58u), 4, ebp, t15, t13, edi);
    t18 = g->edx;
    g->edx = t18;
    return (t17 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dcb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dcb80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
