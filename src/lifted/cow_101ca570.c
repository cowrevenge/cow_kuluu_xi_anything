/* f_0x101ca570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101ca570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        edi = rd32(sp0 + 8u);
        goto L_101ca583;
    }
    return 0u;
L_101ca583: ;
    wr32(sp0 + 8u, edi);
    wr32(sp0 - 4u, edi);
    if (rd8(edi) == 0u)
    {
        eax = edi;
        loc_4 = edi;
        goto L_101ca63c;
    }
    eax = edi;
    ecx = (self & 0xffffff00u) | rd8(edi);
    ebx = edi;
    edx = in_edx;
    esi = rd32(sp0 + 4u);
L_101ca59d: ;
    if (rd8(eax) == 0xau) goto L_101ca5d2;
    wr32(sp0 - 0x14u, sp0 + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 + 8u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x101ca390u), 1, t1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int16_t)(esi - t4) < 0)
    {
        ecx = t5;
        edx = t6;
        goto L_101ca5de;
    }
    ecx = t5;
    edx = t6;
    esi = esi - t4;
    t7 = rd32(sp0 + 8u);
    if (rd8(t7) != 0u)
    {
        eax = t7;
        ebx = t7;
        goto L_101ca59d;
    }
    eax = t7;
    ebx = t7;
    wr32(sp0 - 4u, ebx);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return eax - edi;
L_101ca5d2: ;
    wr32(sp0 - 4u, ebx);
    return eax + 1u - edi;
L_101ca5de: ;
    wr32(sp0 - 4u, ebx);
    if (arg3 == 0u)
    {
        loc_4 = ebx;
        goto L_101ca63a;
    }
    loc_4 = ebx;
    t8 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, 0u);
    if (edi >= t8) goto L_101ca63a;
    esi = edi;
L_101ca5fc: ;
    wr32(sp0 - 0x14u, esi);
    g->edx = edx;
    t9 = rd8(esi);
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, esi);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        edx = t11;
        ebx = (uint32_t)(int8_t)t9;
        esi = esi + 2u;
    }
    else
    {
        edx = t11;
        ebx = (uint32_t)(int8_t)t9;
        esi = esi + 1u;
    }
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, arg3);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), arg3, 3, arg3, ebx, rd32(sp0 - 0x10u));
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
    }
    else
    {
        ecx = t13;
        edx = t14;
        wr32(sp0 + 4u, esi);
    }
    if (esi < rd32(sp0 + 8u)) goto L_101ca5fc;
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_101ca63c;
    }
    ebx = rd32(sp0 - 4u);
L_101ca63a: ;
    eax = ebx;
L_101ca63c: ;
    return eax - edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
