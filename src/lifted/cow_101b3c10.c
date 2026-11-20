/* f_0x101b3c10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Reads the current IME composition string, converts it through FUN_101243b0, and returns the accumulated offset.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b3c10(Guest* g, uint32_t self)
{
    const uint32_t sp0 = g->esp;

    /* Make the original stack locals valid in guest memory.
       Original locals are at [esp+0x10] and [esp+0x14] when esp == sp0 - 0x104,
       i.e. slot = sp0 - 0x104 and buffer = sp0 - 0x100. */
    (void)cow_frame(g, sp0, 0x124u);

    const uint32_t buf  = sp0 - 0x100u;
    const uint32_t slot = sp0 - 0x104u;

    uint32_t edx = g->edx;

    uint32_t eax = rd32(COW_IMG(0x103d3c64u));
    uint32_t hwnd = rd32(eax + 0x18u);

    /* HIMC ImmGetContext(HWND) */
    eax = cow_stdcall(g, COW_IMG(0x101aff50u), 1u, hwnd);
    const uint32_t himc = eax;

    /* BOOL ImmGetOpenStatus(HIMC) */
    eax = cow_stdcall(g, COW_IMG(0x102bc87cu), 1u, himc);

    if (eax == 0u)
    {
        goto late_open_check;
    }

    if (rd8(self + 0xf123u) != 0u)
    {
        goto late_open_check;
    }

    /* LONG ImmGetCompositionStringA(himc, 0x80, NULL, 0) */
    eax = cow_stdcall(g, COW_IMG(0x102bc888u), 4u, himc, 0x80u, 0u, 0u);
    uint32_t ebx = eax;

    /* rep stosd dword ptr es:[edi], eax ; ecx=0x40, edi=buf, eax=0 */
    for (uint32_t i = 0u; i < 0x40u; ++i)
    {
        wr32(buf + i * 4u, 0u);
    }

    /* LONG ImmGetCompositionStringA(himc, 8, buf, 0x100) */
    cow_stdcall(g, COW_IMG(0x102bc888u), 4u, himc, 8u, buf, 0x100u);

    /* BOOL ImmReleaseContext(HWND, HIMC) */
    eax = rd32(COW_IMG(0x103d3c64u));
    hwnd = rd32(eax + 0x18u);
    eax = cow_stdcall(g, COW_IMG(0x101aff60u), 2u, hwnd, himc);

    uint8_t al = rd8(buf);
    uint32_t esi = 0u;
    uint32_t edi = buf;

    wr32(slot, buf);

    if (al == 0u)
    {
        /* edx was last written by lea edx, [esp + 0x14] before the test. */
        edx = buf;
        g->edx = edx;
        return esi;
    }

    if ((int32_t)ebx <= 0)
    {
        /* Same: lea edx, [esp + 0x14] was executed before the loop condition. */
        edx = buf;
        g->edx = edx;
        return esi;
    }

    for (;;)
    {
        /* uint FUN_101243b0(byte *param_1, uint *param_2), cdecl. */
        eax = cow_cdecl(g, COW_IMG(0x101243b0u), 2u,
                        self + esi + 0xef23u,
                        slot);

        /* movsx edx, ax */
        edx = (uint32_t)(int32_t)(int16_t)(uint16_t)eax;

        /* mov eax, dword ptr [esp + 0x18] ; this is the slot updated by the callee */
        eax = rd32(slot);

        edi -= eax;
        esi += edx;

        uint8_t cl = rd8(eax);
        ebx += edi;
        edi = eax;

        if (cl == 0u)
        {
            break;
        }
    }

    g->edx = edx;
    return esi;

late_open_check:
    /* BOOL ImmGetOpenStatus(HIMC) */
    eax = cow_stdcall(g, COW_IMG(0x102bc87cu), 1u, himc);

    if (eax != 0u)
    {
        /* BOOL ImmReleaseContext(HWND, HIMC) */
        eax = rd32(COW_IMG(0x103d3c64u));
        hwnd = rd32(eax + 0x18u);
        eax = cow_stdcall(g, COW_IMG(0x101aff60u), 2u, hwnd, himc);

        /* or eax, 0xffffffff */
        eax = 0xFFFFFFFFu;

        /* edx is unchanged from entry on this path. */
        g->edx = edx;
        return eax;
    }

    /* BOOL ImmReleaseContext(HWND, HIMC) */
    edx = rd32(COW_IMG(0x103d3c64u));
    eax = rd32(edx + 0x18u);
    eax = cow_stdcall(g, COW_IMG(0x101aff60u), 2u, eax, himc);

    /* undefined4 __fastcall FUN_101b56c0(int param_1), caller pops / ecx = this */
    eax = cow_thiscall_cdecl(g, COW_IMG(0x101b56c0u), self, 0u);

    /* edx was last written by mov edx, dword ptr [0x103d3c64] before the release call. */
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b3c10(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
