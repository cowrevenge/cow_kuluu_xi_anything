/* f_0x10314060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10314060(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109b27b8u)) != 0u)
    {
        wr32(COW_IMG(0x109f8410u), rd32(COW_IMG(0x109f8410u)) + 1u);
        if ((int32_t)rd32(COW_IMG(0x109f840cu)) > 0)
        {
            wr32(COW_IMG(0x109f8410u), rd32(COW_IMG(0x109f8410u)) - 1u);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x13u, in_ebx, in_esi);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
            loc_14 = 1u;
        }
        else
        {
            ecx = self;
            edx = in_edx;
            loc_14 = 0u;
        }
        eax = 0xffu;
        ebx = 0u;
        esi = arg2;
        edi = arg1;
L_103140e4: ;
        if ((uint8_t)eax == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)eax;
            goto L_1031410f;
        }
        eax = (eax & 0xffffff00u) | (uint8_t)eax;
        if (rd8(esi) == rd8(edi))
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            ebx = (ebx & 0xffffff00u) | rd8(edi);
            esi = esi + 1u;
            edi = edi + 1u;
            goto L_103140e4;
        }
        eax = (eax & 0xffffff00u) | rd8(esi);
        ebx = (ebx & 0xffffff00u) | rd8(edi);
        esi = esi + 1u;
        edi = edi + 1u;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x10314653u), ecx, 1, ebx);
        t4 = g->ecx;
        t5 = g->edx;
        g->edx = t5;
        g->esp = sp0 - 0x14u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10314653u), t4, 1, eax);
        t7 = g->ecx;
        t8 = g->edx;
        if ((uint8_t)t3 == (uint8_t)t6)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            ebx = t3;
            goto L_103140e4;
        }
        eax = t6;
        ecx = t7;
        edx = t8;
        cf = (uint8_t)t3 < (uint8_t)t6;
        eax = -cf + 1u - cf;
L_1031410f: ;
        if (loc_14 != 0u)
        {
            ebx = eax;
            eax = loc_14;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_ebx, in_esi);
            t9 = g->edx;
            edx = t9;
        }
        else
        {
            ebx = eax;
            wr32(COW_IMG(0x109f8410u), rd32(COW_IMG(0x109f8410u)) - 1u);
        }
        eax = ebx;
    }
    else
    {
        eax = (COW_IMG(0x109b27b0u) & 0xffffff00u) | 0xffu;
        ecx = self;
        esi = arg2;
        edi = arg1;
L_1031407c: ;
        if ((uint8_t)eax == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)eax;
            goto L_103140ae;
        }
        eax = (eax & 0xffffff00u) | (uint8_t)eax;
        if (rd8(edi) << 8u >> 8u == rd8(esi))
        {
            eax = (((eax & 0xffffff00u) | rd8(esi)) & 0xffff00ffu) | rd8(edi) << 8u;
            esi = esi + 1u;
            edi = edi + 1u;
            goto L_1031407c;
        }
        eax = (((eax & 0xffffff00u) | rd8(esi)) & 0xffff00ffu) | rd8(edi) << 8u;
        esi = esi + 1u;
        edi = edi + 1u;
        if ((uint8_t)((uint8_t)((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) + (-((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) < 0x1au) & 0x20u)) + 0x41u) == (uint8_t)(((uint8_t)((uint8_t)((uint8_t)eax - 0x41u) + (-((uint8_t)((uint8_t)eax - 0x41u) < 0x1au) & 0x20u)) * 0x100u + 0x4100u) >> 8u))
        {
            ecx = (ecx & 0xffffff00u) | (-((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) < 0x1au) & 0x20u);
            eax = (((eax & 0xffff00ffu) | (uint8_t)((uint8_t)((uint8_t)((uint8_t)eax - 0x41u) + (-((uint8_t)((uint8_t)eax - 0x41u) < 0x1au) & 0x20u)) + 0x41u) << 8u) & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) + (-((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) < 0x1au) & 0x20u)) + 0x41u);
            goto L_1031407c;
        }
        cf = (uint8_t)((uint8_t)((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) + (-((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) < 0x1au) & 0x20u)) + 0x41u) < (uint8_t)(((uint8_t)((uint8_t)((uint8_t)eax - 0x41u) + (-((uint8_t)((uint8_t)eax - 0x41u) < 0x1au) & 0x20u)) * 0x100u + 0x4100u) >> 8u);
        eax = (((eax & 0xffff00ffu) | (uint8_t)((uint8_t)((uint8_t)((uint8_t)eax - 0x41u) + (-((uint8_t)((uint8_t)eax - 0x41u) < 0x1au) & 0x20u)) + 0x41u) << 8u) & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) + (-((uint8_t)((uint8_t)(eax >> 8u) - 0x41u) < 0x1au) & 0x20u)) + 0x41u);
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)-cf - 0xffu - cf);
L_103140ae: ;
        eax = (uint32_t)(int8_t)eax;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10314060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10314060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
