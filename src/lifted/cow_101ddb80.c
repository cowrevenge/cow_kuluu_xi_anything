/* f_0x101ddb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ddb80(Guest* g)
{
    uint32_t cf;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_ebp);
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        eax = rd32(sp0 + 8u);
        goto L_101ddbf3;
    }
    eax = rd32(sp0 + 8u);
    if ((int32_t)eax >= 4) goto L_101ddbf3;
    ecx = self;
    edx = in_edx;
    ebx = 0u;
L_101ddba2: ;
    t1 = rd32(COW_IMG(0x1037f050u) + ebx * 8u);
    wr32(sp0 - 0x94u, t1);
    wr32(sp0 - 0x98u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10314060u), ecx, 4, arg1, t1, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_101ddc02;
    }
    ecx = t3;
    edx = t4;
    eax = arg1;
    esi = rd32(COW_IMG(0x1037f054u) + ebx * 8u);
L_101ddbc0: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_101ddbe4;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_101ddbe0;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101ddbe4;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_101ddbc0;
    }
L_101ddbe0: ;
    eax = 0u;
L_101ddbe9: ;
    if (eax == 0u) goto L_101ddc02;
    if ((int32_t)(ebx + 1u) < 7)
    {
        ebx = ebx + 1u;
        goto L_101ddba2;
    }
L_101ddbf3: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_101ddbe4: ;
    eax = -cf + 1u - cf;
    goto L_101ddbe9;
L_101ddc02: ;
    if ((int32_t)ebx < 0) goto L_101ddbf3;
    if ((int32_t)ebx >= 7) goto L_101ddbf3;
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        goto L_101ddbf3;
    }
    eax = rd32(self + 8u);
    if (ebx != 6u)
    {
        if (ebx == 5u)
        {
            wr32(sp0 + 8u, 1u);
        }
    }
    else
    {
        wr32(sp0 + 8u, 3u);
    }
    wr32(sp0 - 0x94u, 5u);
    wr32(sp0 - 0x98u, 2u);
    t5 = rd8(sp0 + 8u);
    wr8(self + 0x17u, (uint8_t)((uint8_t)ebx * 0x10u + 0x10u | (t5 & 0xfu)));
    g->ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx * 0x10u + 0x10u | (t5 & 0xfu));
    g->edx = edx;
    t6 = rd8(sp0 + 8u);
    g->esp = sp0 - 0x90u;
    t7 = cow_thiscall(g, COW_IMG(0x101dd520u), self, 2, 2u, 5u);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        goto L_101ddc5f;
    }
    eax = t7;
    edx = t8;
    ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx * 0x10u + 0x10u | (t5 & 0xfu));
    if ((uint8_t)ebx == rd8(self + 0x18u)) goto L_101ddc9b;
L_101ddc5f: ;
    wr32(sp0 - 0x94u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t9 = cow_thiscall(g, COW_IMG(0x101dd4e0u), self, 1, 2u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        ecx = t10;
    }
    else
    {
        eax = t9;
        edx = t11;
        wr32(sp0 - 0x94u, 5u);
        wr32(sp0 - 0x98u, 2u);
        wr32(sp0 - 0x9cu, sp0 - 0x7cu);
        g->esp = sp0 - 0x90u;
        cow_thiscall(g, COW_IMG(0x101dd5a0u), self, 3, sp0 - 0x7cu, 2u, 5u);
        t12 = g->ecx;
        ecx = t12;
    }
    wr32(sp0 - 0x94u, sp0 - 0x7cu);
    t13 = (uint32_t)(int8_t)rd8(self + 0x17u);
    wr32(sp0 - 0x98u, t13);
    g->ecx = ecx;
    g->esp = sp0 - 0x90u;
    t14 = cow_cdecl(g, COW_IMG(0x100e5980u), 2, t13, sp0 - 0x7cu);
    t15 = g->ecx;
    wr8(self + 0x18u, rd8(self + 0x17u));
    eax = t14;
L_101ddc9b: ;
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ddb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ddb80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
