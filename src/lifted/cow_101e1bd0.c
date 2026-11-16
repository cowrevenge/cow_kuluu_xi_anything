/* f_0x101e1bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101e1bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u)
    {
        eax = in_eax;
        goto L_101e1c2c;
    }
    esi = rd32(self);
    eax = in_eax;
    edx = in_edx;
    ebx = in_ebx;
L_101e1be2: ;
    if (rd32(esi) == 0u) goto L_101e1c25;
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x101e25b0u), esi, edx, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        ebx = ebx & 0xffffff00u;
    }
    else
    {
        eax = t1;
        edx = t2;
        ebx = ebx & 0xffffff00u;
        g->esi = esi;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x101e2660u), esi, edx, 1, arg1);
        t3 = g->edx;
        edx = t3;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101e2600u), esi, 1, arg1);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        g->esi = esi;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x101e2660u), esi, edx, 1, arg1);
        t6 = g->edx;
        edx = t6;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    g->esp = sp0 - 0x10u;
    t7 = cow_fastcall(g, COW_IMG(0x101e2550u), esi, edx, 1, arg1);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101e1c35;
    }
    eax = t7;
    edx = t9;
    if ((uint8_t)ebx != 0u) goto L_101e1c82;
L_101e1c25: ;
    if (rd32(esi + 0x20u) != 0u)
    {
        esi = rd32(esi + 0x20u);
        goto L_101e1be2;
    }
L_101e1c2c: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_101e1c35: ;
    if ((int8_t)rd8(arg1 + 5u) >= 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 5u);
        if ((int8_t)rd8(esi + 5u) < 0)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 5u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 5u);
            if ((int8_t)ecx > (int8_t)eax)
            {
                g->esi = esi;
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t13 = cow_fastcall(g, COW_IMG(0x101e2660u), arg1, edx, 1, esi);
                t14 = g->ecx;
                t15 = g->edx;
                t16 = rd8(esi + 5u);
                wr8(arg1 + 5u, (uint8_t)t16);
                eax = (t13 & 0xffffff00u) | t16;
                ecx = t14;
                edx = t15;
            }
        }
    }
    else
    {
        g->esi = esi;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t10 = cow_fastcall(g, COW_IMG(0x101e2660u), arg1, edx, 1, esi);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    if (rd16(esi + 8u) >> 0xfu != 0u)
    {
        wr8(arg1 + 9u, rd8(arg1 + 9u) | 0x80u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x101e1eb0u), self, 1, esi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return t17 & 0xffffff00u;
L_101e1c82: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1bd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
