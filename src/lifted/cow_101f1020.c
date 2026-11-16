/* f_0x101f1020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101f1020(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg3;
    ecx = self;
    edx = rd32(sp0 + 0x10u) - arg3;
    ebx = 0u;
    esi = 0u;
    edi = 8u;
L_101f1044: ;
    if ((int16_t)rd16(eax) < 0)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        ebx = ebx + (uint32_t)(int16_t)ecx;
        ecx = (uint32_t)(int16_t)rd16(eax + edx);
        esi = esi + (uint32_t)(int16_t)rd16(eax + edx);
    }
    if (edi != 1u)
    {
        eax = eax + 2u;
        edi = edi - 1u;
        goto L_101f1044;
    }
    if ((int32_t)arg1 < (int32_t)ebx) goto L_101f10e7;
    loc_8 = ebx;
    if ((int32_t)esi <= 0) goto L_101f10e7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_stdcall(g, COW_IMG(0x101effd0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 0x10u, t1);
    if ((int32_t)t1 <= 0)
    {
        ecx = t2;
        edx = t3;
        edi = 0u;
    }
    else
    {
        ecx = t2;
        edx = t3;
        esi = 0u;
        edi = 0u;
L_101f1084: ;
        if ((int16_t)rd16(arg3 + esi * 2u) >= 0)
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t4 = cow_cdecl(g, COW_IMG(0x101effe0u), 1, esi);
            t5 = g->ecx;
            t6 = g->edx;
            g->esp = sp0 - 0x1cu;
            t7 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t4);
            g->eax = (uint8_t)t7;
            g->edx = rd32(self);
            t8 = rd32(self);
            g->esp = sp0 - 0x18u;
            t9 = cow_thiscall(g, rd32(t8 + 0x18u), self, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                ecx = t10;
                edx = t11;
                edi = edi + (uint8_t)t7 - 1u;
            }
            else
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                ebx = t4;
                edi = edi + (uint8_t)t7 - 1u;
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t12 = cow_call_regs(g, COW_IMG(0x100eb8d0u), eax, ecx, g->edx, 1, 3, ebx, in_edi, in_esi);
                t13 = g->ecx;
                t14 = g->edx;
                ecx = t13;
                edx = t14;
                edi = edi - t12;
            }
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 + 0x10u))
        {
            esi = esi + 1u;
            goto L_101f1080;
        }
        ebx = loc_8;
    }
    g->eax = arg2 - ebx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x101cb590u), 2, arg2 - ebx, edi);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->edx = t16;
    return (t15 & 0xffffff00u) | 1u;
L_101f1080: ;
    goto L_101f1084;
L_101f10e7: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f1020(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
